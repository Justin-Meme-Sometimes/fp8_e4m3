`timescale 1ns / 1ps
//
// Self-checking testbench for bfloat_to_fp8_requant. Reads exhaustive
// vectors produced by gen_vectors_requant.py (from golden_model.py) and
// compares every one against the DUT. Run tb/run_requant.sh to regenerate
// vectors and execute this.
//

module tb_bfloat16_to_fp8_requant;

    localparam int NUM_VECTORS = 65536;

    logic [15:0] in_a;
    logic [7:0]  result;
    logic [23:0] vectors [0:NUM_VECTORS-1];

    bfloat16_to_fp8_requant dut (
        .in_a(in_a),
        .result(result)
    );

    initial begin
        int errors;
        int max_printed;
        logic [7:0] expected;

        $readmemh("tb/vectors_requant.hex", vectors);

        errors = 0;
        max_printed = 20;

        for (int i = 0; i < NUM_VECTORS; i++) begin
            in_a     = vectors[i][23:8];
            expected = vectors[i][7:0];

            #1;

            if (result !== expected) begin
                errors++;
                if (errors <= max_printed)
                    $display("MISMATCH in_a=%04h got=%02h expected=%02h",
                              in_a, result, expected);
            end
        end

        $display("---");
        $display("Total: %0d  Errors: %0d", NUM_VECTORS, errors);
        if (errors > max_printed)
            $display("(%0d further mismatches not printed)", errors - max_printed);

        $finish;
    end

endmodule
