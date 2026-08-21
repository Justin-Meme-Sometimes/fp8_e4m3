`timescale 1ns / 1ps

module fp_8_mul (
input  logic [7:0] a,
input  logic [7:0] b,
output logic [15:0] result
);
logic sign_a, sign_b, sign_r;
logic [3:0]  exp_a, exp_b;
logic [2:0] mant_a, mant_b;
logic [7:0]  product;
logic [7:0]  exp_r;
logic [6:0]  product_edited;
logic is_zero_a, is_zero_b;


assign sign_a = a[7];
assign sign_b = b[7];

assign exp_a = a[6:3];
assign exp_b = b[6:3];

assign mant_a = a[2:0];
assign mant_b = b[2:0];

always_comb begin

    is_zero_a = (a[6:0] == 7'b0);
    is_zero_b = (b[6:0] == 7'b0);

    // === Handle signs (assumes same sign only, no subtraction) ===
    sign_r = sign_a ^ sign_b;

    exp_r = (exp_a + exp_b + 113); // ((exp_a - 7) + (exp_b -7) + 113)
    // === Add aligned mantissas ===
    product = {1'b1, mant_a} * {1'b1, mant_b};

    if (product[7] == 1) begin
        product_edited = product[6:0];
        exp_r = exp_r + 1;
    end else begin
        product_edited = {product[5:0], 1'b0};
    end

    if(is_zero_a || is_zero_b) begin
        result = 16'h0000;
    end else if(product == 0) begin
        result = 16'h0000;
    end else begin
        result = {sign_r, exp_r, product_edited};
    end
end
endmodule