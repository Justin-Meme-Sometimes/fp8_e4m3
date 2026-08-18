`timescale 1ns / 1ps
//
// Self-checking testbench for bfloat16_add (module name: bfloa16_add).
// Reads vectors produced by gen_vectors_bf16_add.py (from golden_model.py)
// and compares against the DUT. Not exhaustive (bf16's input space is too
// large for that) - see gen_vectors_bf16_add.py for how vectors are chosen.
// Run tb/run_bf16_add.sh to regenerate vectors and execute this.
//

module tb_bfloat16_add;

    localparam int NUM_VECTORS = 406771;

    logic [15:0] a, b, result;
    logic [47:0] vectors [0:NUM_VECTORS-1];

    bfloa16_add dut (
        .a(a),
        .b(b),
        .result(result)
    );

    initial begin
        int errors;
        int max_printed;
        logic [15:0] expected;

        $readmemh("tb/vectors_bf16_add.hex", vectors);

        errors = 0;
        max_printed = 20;

        for (int i = 0; i < NUM_VECTORS; i++) begin
            a        = vectors[i][47:32];
            b        = vectors[i][31:16];
            expected = vectors[i][15:0];

            #1;

            if (result !== expected) begin
                errors++;
                if (errors <= max_printed)
                    $display("MISMATCH a=%04h b=%04h got=%04h expected=%04h",
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
