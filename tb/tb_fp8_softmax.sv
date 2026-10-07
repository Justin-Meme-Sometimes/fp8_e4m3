`timescale 1ns / 1ps
//
// Self-checking testbench for fp8_softmax (streaming log-softmax). Reads
// row vectors produced by gen_vectors_softmax.py (from golden_model_softmax.py)
// and compares every row against the DUT within a fixed-point tolerance -
// the RTL's LUT-based log2/exp2 are quantized, so bit-exact matching isn't
// expected. Run tb/run_softmax.sh to regenerate vectors and execute this.
//
// ins/out are Q8.7 signed fixed point (scale 128). con and top-level clr
// are dead in the DUT (never referenced in fp8_softmax.sv) so they're just
// tied off here.
//
// Drive protocol: compute_state+valid held high for exactly 4 cycles per
// row, presenting one 4-lane chunk of the row's 16 values per cycle, then
// wait for out_valid (with a watchdog) before checking all 16 lanes and
// moving to the next row. If mismatches show up, that's worth tracing
// together rather than assumed to be a testbench problem.

module tb_fp8_softmax;

    localparam int NUM_ROWS       = 55;   // must match gen_vectors_softmax.py
    localparam int CLK_PERIOD     = 10;
    localparam int TOLERANCE_LSB  = 4;    // +/- in Q8.7 LSBs (~0.03)
    localparam int TIMEOUT_CYCLES = 200;  // watchdog per row while waiting for out_valid
    localparam int IDLE_CYCLES    = 3;    // gap between rows (FIND_MAX -> ... -> DONE -> IDLE)

    logic clk, rst_n;
    logic signed [3:0][15:0] ins;
    logic signed [15:0] con;
    logic compute_state, clr, valid;
    logic signed [15:0][15:0] out;
    logic out_valid;

    logic [15:0] ins_mem [0:NUM_ROWS*16-1];
    logic [15:0] exp_mem [0:NUM_ROWS*16-1];

    int errors;
    int max_printed;
    int max_abs_err;

    fp8_softmax dut (
        .clk(clk),
        .rst_n(rst_n),
        .ins(ins),
        .con(con),
        .compute_state(compute_state),
        .clr(clr),
        .valid(valid),
        .out(out),
        .out_valid(out_valid)
    );

    always #(CLK_PERIOD/2) clk = ~clk;

    initial begin
        int row_base;
        int cyc;
        int diff;

        $readmemh("tb/vectors_softmax_in.hex", ins_mem);
        $readmemh("tb/vectors_softmax_exp.hex", exp_mem);

        $dumpfile("tb/waveform_softmax.vcd");
        $dumpvars(0, tb_fp8_softmax);

        clk = 0;
        rst_n = 0;
        con = '0;
        clr = 0;
        valid = 0;
        compute_state = 0;
        ins = '0;

        errors = 0;
        max_printed = 20;
        max_abs_err = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        for (int row = 0; row < NUM_ROWS; row++) begin
            row_base = row * 16;

            for (int chunk = 0; chunk < 4; chunk++) begin
                compute_state = 1;
                valid = 1;
                for (int lane = 0; lane < 4; lane++) begin
                    ins[lane] = ins_mem[row_base + chunk*4 + lane];
                end
                @(posedge clk);
            end

            compute_state = 0;
            valid = 0;

            cyc = 0;
            while (!out_valid) begin
                @(posedge clk);
                cyc++;
                if (cyc > TIMEOUT_CYCLES) begin
                    $display("TIMEOUT waiting for out_valid on row %0d", row);
                    $finish;
                end
            end

            for (int lane = 0; lane < 16; lane++) begin
                diff = $signed(out[lane]) - $signed(exp_mem[row_base + lane]);
                if (diff < 0) diff = -diff;
                if (diff > max_abs_err) max_abs_err = diff;
                if (diff > TOLERANCE_LSB) begin
                    errors++;
                    if (errors <= max_printed)
                        $display("MISMATCH row=%0d lane=%0d got=%0d expected=%0d diff=%0d",
                                  row, lane, $signed(out[lane]), $signed(exp_mem[row_base + lane]), diff);
                end
            end

            repeat (IDLE_CYCLES) @(posedge clk);
        end

        $display("---");
        $display("Total rows: %0d  Errors: %0d  Max |err| (Q8.7 LSBs): %0d", NUM_ROWS, errors, max_abs_err);
        if (errors > max_printed)
            $display("(%0d further mismatches not printed)", errors - max_printed);

        $finish;
    end

endmodule
