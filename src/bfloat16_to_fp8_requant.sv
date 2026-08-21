module bfloat16_to_fp8_requant(
    input logic [15:0] in_a,
    output logic [7:0] result
);

logic sign_a;
logic [7:0]  exp_a;
logic [6:0]  mant_a;
logic [6:0]  edited_mant_a;
logic [7:0]  exp_r, exp_r_edited;
logic [3:0]  rounded_frac;
logic [2:0]  rounded_frac_edited;

logic guard, mantissa_LSB, round, sticky, round_up;
logic underflowed;


assign sign_a = in_a[15];
assign exp_a = in_a[14:7];
assign mant_a = in_a[6:0];

always_comb begin
    underflowed = 0;
    if(exp_a < 121) begin
        edited_mant_a = 0;
        exp_r = 0;
        underflowed = 1;
    end else begin
        exp_r = exp_a - 8'd120; //(exp - 127) + 7
        edited_mant_a = mant_a;
    end

    mantissa_LSB = in_a[4];
    guard = in_a[3];
    round = in_a[2];
    sticky = in_a[0] | in_a[1];

    round_up = guard & (round | sticky | mantissa_LSB);

    rounded_frac = {1'b0, edited_mant_a[6:4]} + round_up; 

    rounded_frac_edited = rounded_frac[2:0];
    if (rounded_frac[3]) begin
        exp_r_edited = exp_r + 1;
    end else begin
        exp_r_edited = exp_r;
    end

    if(edited_mant_a == 0 && underflowed) begin
        result = 8'h00;
    end else if(exp_r_edited >= 8'd16 || (exp_r_edited[3:0] == 4'hF && rounded_frac_edited == 3'h7)) begin
        result = {sign_a, 4'hF, 3'h6};
    end else begin
        result = {sign_a, exp_r_edited[3:0], rounded_frac_edited};
    end

end
endmodule