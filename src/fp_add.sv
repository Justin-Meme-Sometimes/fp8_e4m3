`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/27/2025 09:59:06 PM
// Design Name: 
// Module Name: op_units
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module fp_8_add ( //probably wrong
input  logic [7:0] a,
input  logic [7:0] b,
output logic [7:0] result
);


// // Extract fields (combinational temps; you can keep or remove later)
logic sign_a, sign_b, sign_r;
logic [3:0]  exp_a, exp_b, exp_r;
logic [2:0] mant_a, mant_b;
logic [6:0] aligned_a, aligned_b;
logic [7:0] sum;
logic [3:0]  exp_diff;
logic [12:0] mant_sum_norm;
logic        guard, round, sticky;
logic [3:0]  exp_r_edited;
logic [9:0]  kept;
logic [10:0] rounded_frac;
logic        round_bit;
logic [9:0]  rounded_frac_edited;

// a[7:0]: sign[7], exp[6:3], mantissa[2:0]

assign sign_a = a[7];
assign sign_b = b[7];

assign exp_a = a[6:3];
assign exp_b = b[6:3];

assign mant_a = a[2:0];
assign mant_b = b[2:0];

// =========================
// Combinational datapath
// =========================
always_comb begin
    if (exp_a > exp_b) begin
        exp_diff  = exp_a - exp_b;
        aligned_a = {1'b1, mant_a, 3'b000};
        
        // Capture shifted-out bits for GRS
        if (exp_diff == 0) begin
            aligned_b = {1'b1, mant_b, 3'b000};
            // No bits shifted out, GRS handled in normalization
        end else if (exp_diff < 7) begin
            aligned_b = ({1'b1, mant_b, 3'b000} >> exp_diff);
            // Could track sticky bit here if you want perfect rounding
        end else begin
            aligned_b = 4'b0;  // Shifted out completely
        end
        exp_r = exp_a;
    end else begin
        // Mirror logic for other case
        exp_diff  = exp_b - exp_a;
        aligned_b = {1'b1, mant_b, 3'b000};
        if (exp_diff < 7) begin
            aligned_a = ({1'b1, mant_a, 3'b000} >> exp_diff);
        end else begin
            aligned_a = 4'b0;
        end
        exp_r = exp_b;
    end


    // === Handle signs (assumes same sign only, no subtraction) ===
    if (sign_a == sign_b) begin
        // Addition
        sum = aligned_a + aligned_b;
        sign_r = sign_a;
    end else begin
        // Subtraction - need to handle magnitude comparison
        if (aligned_a >= aligned_b) begin
            sum = aligned_a - aligned_b;
            sign_r = sign_a;
        end else begin
            sum = aligned_b - aligned_a;
            sign_r = sign_b;
        end
    end

    // // === Normalize ===
    // if (sum[13]) begin
    //     // Overflow: shift right by 1
    //     mant_sum_norm = sum[13:1];
    //     guard         = sum[0];
    //     round         = 1'b0;
    //     sticky        = 1'b0;
    //     exp_r_edited  = exp_r + 1;
    // end else begin
    //     // No overflow - check if normalized
    //     if (sum[12]) begin
    //         // Already normalized (format 1.xxx)
    //         mant_sum_norm = sum[12:0];
    //         exp_r_edited  = exp_r;
    //     end else begin
    //         // Shift left by 1 (format 01.xxx)
    //         mant_sum_norm = sum[11:0] << 1;
    //         exp_r_edited  = exp_r - 1;
    //     end
    //     guard  = 1'b0;
    //     round  = 1'b0;
    //     sticky = 1'b0;
    // end

    // // === Rounding (round to nearest, tie to even) ===
    // round_bit = guard & (mant_sum_norm[0] | round | sticky);
    // kept = mant_sum_norm[11:2];

    // rounded_frac = mant_sum_norm[11:2] + round_bit;

    // if(rounded_frac[10])begin
    //     //if overflow shift mantissa by 1 and increment exponent
    //    rounded_frac_edited = rounded_frac[10:1];
    //    exp_r_edited = exp_r + 1;
    // end else begin
    //    rounded_frac_edited = rounded_frac[9:0];
    //    exp_r_edited = exp_r;
    // end

    // // === Assemble result ===
    // if (exp_r_edited == 5'd0 || mant_sum_norm[12:2] == 11'b0) begin
    //     result = 16'h0000;  // Positive zero
    // end else begin
    //     result = {sign_r, exp_r_edited, rounded_frac_edited};
    // end
end
endmodule


