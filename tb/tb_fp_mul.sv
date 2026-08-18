`timescale 1ns / 1ps
//
// Self-checking testbench for fp_8_mul. Reads exhaustive vectors produced
// by gen_vectors_mul.py (from golden_model.py) and compares every one
// against the DUT. Run tb/run_mul.sh to regenerate vectors and execute this.
//

module tb_fp_mul;

    localparam int NUM_VECTORS = 65536;

    logic [7:0]  a, b;
    logic [15:0] result;
    logic [31:0] vectors [0:NUM_VECTORS-1];

    fp_8_mul dut (
        .a(a),
        .b(b),
        .result(result)
    );

    initial begin
        int errors;
        int max_printed;
        logic [15:0] expected;

        $readmemh("tb/vectors_mul.hex", vectors);

        errors = 0;
        max_printed = 20;

        for (int i = 0; i < NUM_VECTORS; i++) begin
            a        = vectors[i][31:24];
            b        = vectors[i][23:16];
            expected = vectors[i][15:0];

            #1;

            if (result !== expected) begin
                errors++;
                if (errors <= max_printed)
                    $display("MISMATCH a=%02h b=%02h got=%04h expected=%04h",
                              a, b, result, expected);
            end
        end

        $display("---");
        $display("Total: %0d  Errors: %0d", NUM_VECTORS, errors);
        if (errors > max_printed)
            $display("(%0d further mismatches not printed)", errors - max_printed);

        $finish;
    end

endmodule
