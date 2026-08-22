//newton fp8_div used for softmax and layernorm
module fp8_div (
    input logic [7:0] in_a,
    input output [7:0] out_b);

    logic sign_a, sign_b, sign_r;
    logic [3:0]  exp_a, exp_b;
    logic [2:0] mant_a, mant_b;
    logic [6:0] aligned_a, aligned_b;
    logic [7:0] sum;
    logic [3:0]  exp_diff;
    logic [2:0]  mant_norm;
    logic        guard, round, sticky;
    logic [3:0]  exp_norm;
    logic [4:0]  exp_r_edited, exp_r;
    logic [3:0]  rounded_frac;
    logic        round_bit;
    logic [2:0]  rounded_frac_edited;
    logic is_zero_a, is_zero_b;
    logic [6:0] mant_a_ext, mant_b_ext;
    logic mantissa_LSB, round_up, align_sticky, align_sticky_a, align_sticky_b;


    assign sign_a = a[7];
    assign sign_b = b[7];

    assign exp_a = a[6:3];
    assign exp_b = b[6:3];

    assign mant_a = a[2:0];
    assign mant_b = b[2:0];



    
endmodule