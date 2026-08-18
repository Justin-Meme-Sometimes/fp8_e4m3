//currently adapted from fp_8
module bfloa16_add(
    input logic [15:0] a,
    input logic [15:0] b,
    output logic [15:0] result
);

// // Extract fields (combinational temps)
logic sign_a, sign_b, sign_r;
logic [7:0]  exp_a, exp_b;
logic [6:0] mant_a, mant_b;
logic [10:0] aligned_a, aligned_b;
logic [11:0] sum;
logic [7:0]  exp_diff;
logic [2:0]  mant_norm;
logic        guard, round, sticky;
logic [3:0]  exp_norm;
logic [8:0]  exp_r_edited, exp_r;
logic [7:0]  rounded_frac;
logic        round_bit;
logic [6:0]  rounded_frac_edited;
logic is_zero_a, is_zero_b;
logic mantissa_LSB, round_up, align_sticky, align_sticky_a, align_sticky_b;


assign sign_a = a[15];
assign sign_b = b[15];

assign exp_a = a[14:7];
assign exp_b = b[14:7];

assign mant_a = a[6:0];
assign mant_b = b[6:0];


always_comb begin

    is_zero_a = (a[14:0] == 15'b0);
    is_zero_b = (b[14:0] == 15'b0);

    if (exp_a > exp_b) begin
        exp_diff  = exp_a - exp_b;
        aligned_a = {1'b1, mant_a, 3'b000};
        case (exp_diff)
            0: align_sticky_a = 0;
            1: align_sticky_a = |({1'b1,mant_b,3'b000}[0:0]);
            2: align_sticky_a = |({1'b1,mant_b,3'b000}[1:0]);
            3: align_sticky_a = |({1'b1,mant_b,3'b000}[2:0]);
            4: align_sticky_a = |({1'b1,mant_b,3'b000}[3:0]);
            5: align_sticky_a = |({1'b1,mant_b,3'b000}[4:0]);
            6: align_sticky_a = |({1'b1,mant_b,3'b000}[5:0]);
            7: align_sticky_a = |({1'b1,mant_b,3'b000}[6:0]);
            8: align_sticky_a = |({1'b1,mant_b,3'b000}[7:0]);
            9: align_sticky_a = |({1'b1,mant_b,3'b000}[8:0]);
            10: align_sticky_a = |({1'b1,mant_b,3'b000}[9:0]);
            11: align_sticky_a = |({1'b1,mant_b,3'b000}[10:0]);
            12: align_sticky_a = |({1'b1,mant_b,3'b000}[11:0]);
            13: align_sticky_a = |({1'b1,mant_b,3'b000}[12:0]);
            14: align_sticky_a = |({1'b1,mant_b,3'b000}[13:0]);
            15: align_sticky_a = |({1'b1,mant_b,3'b000}[14:0]);
            16: align_sticky_a = |({1'b1,mant_b,3'b000}[15:0]);
            default: align_sticky_a = 1;
        endcase 
        align_sticky = align_sticky_a;
        if (exp_diff == 0) begin
            aligned_b = {1'b1, mant_b, 3'b000};
        end else if (exp_diff < 15) begin
            aligned_b = ({1'b1, mant_b, 3'b000} >> exp_diff);
        end else begin
            aligned_b = 4'b0;  
        end
        exp_r = exp_a;
    end else begin
        exp_diff  = exp_b - exp_a;
        case (exp_diff)
            0: align_sticky_b = 0;
            1: align_sticky_b = |({1'b1,mant_a,3'b000}[0:0]);
            2: align_sticky_b = |({1'b1,mant_a,3'b000}[1:0]);
            3: align_sticky_b = |({1'b1,mant_a,3'b000}[2:0]);
            4: align_sticky_b = |({1'b1,mant_a,3'b000}[3:0]);
            5: align_sticky_b = |({1'b1,mant_a,3'b000}[4:0]);
            6: align_sticky_b = |({1'b1,mant_a,3'b000}[5:0]);
            7: align_sticky_b = |({1'b1,mant_a,3'b000}[6:0]);
            8: align_sticky_b = |({1'b1,mant_a,3'b000}[7:0]);
            9: align_sticky_b = |({1'b1,mant_a,3'b000}[8:0]);
            10: align_sticky_b = |({1'b1,mant_a,3'b000}[9:0]);
            11: align_sticky_b = |({1'b1,mant_a,3'b000}[10:0]);
            12: align_sticky_b = |({1'b1,mant_a,3'b000}[11:0]);
            13: align_sticky_b = |({1'b1,mant_a,3'b000}[12:0]);
            14: align_sticky_b = |({1'b1,mant_a,3'b000}[13:0]);
            15: align_sticky_b = |({1'b1,mant_a,3'b000}[14:0]);
            16: align_sticky_b = |({1'b1,mant_a,3'b000}[15:0]);
            default: align_sticky_b = 1;
        endcase 
        align_sticky = align_sticky_b;
        aligned_b = {1'b1, mant_b, 3'b000};
        if (exp_diff < 15) begin
            aligned_a = ({1'b1, mant_a, 3'b000} >> exp_diff);
        end else begin
            aligned_a = 4'b0;
        end
        exp_r = exp_b;
    end


   
    if (sign_a == sign_b) begin
        sum = aligned_a + aligned_b;
        sign_r = sign_a;
    end else begin
        if (aligned_a >= aligned_b) begin
            sum = aligned_a - aligned_b - align_sticky;
            sign_r = sign_a;
        end else begin
            sum = aligned_b - aligned_a - align_sticky;
            sign_r = sign_b;
        end
    end

    if(sum[11] == 1) begin
        sum = sum >> 1 | {11'b0, sum[0]};
        exp_r = exp_r + 1;
    end else if(sum[10] == 1) begin

    end else begin
        casez(sum[9:0])
            10'b1?????????: begin
                if(exp_r < 1) sum = 12'h0;
                else begin sum = sum << 1; exp_r = exp_r - 1; end
            end
            10'b01????????: begin
                if(exp_r < 2) sum = 12'h0;
                else begin sum = sum << 2; exp_r = exp_r - 2; end
            end
            10'b001???????: begin
                if(exp_r < 3) sum = 12'h0;
                else begin sum = sum << 3; exp_r = exp_r - 3; end
            end
            10'b0001??????: begin
                if(exp_r < 4) sum = 12'h0;
                else begin sum = sum << 4; exp_r = exp_r - 4; end
            end
            10'b00001?????: begin
                if(exp_r < 5) sum = 12'h0;
                else begin sum = sum << 5; exp_r = exp_r - 5; end
            end
            10'b000001????: begin
                if(exp_r < 6) sum = 12'h0;
                else begin sum = sum << 6; exp_r = exp_r - 6; end
            end
            10'b0000001???: begin
                if(exp_r < 7) sum = 12'h0;
                else begin sum = sum << 7; exp_r = exp_r - 7; end
            end
            10'b00000001??: begin
                if(exp_r < 8) sum = 12'h0;
                else begin sum = sum << 8; exp_r = exp_r - 8; end
            end
            10'b000000001?: begin
                if(exp_r < 9) sum = 12'h0;
                else begin sum = sum << 9; exp_r = exp_r - 9; end
            end
            10'b0000000001: begin
                if(exp_r < 10) sum = 12'h0;
                else begin sum = sum << 10; exp_r = exp_r - 10; end
            end
        endcase
    end

    mantissa_LSB = sum[3];
    guard = sum[2];
    round = sum[1];
    sticky = sum[0] | align_sticky;

    round_up = guard & (round | sticky | mantissa_LSB);

    rounded_frac = {1'b0, sum[9:3]} + round_up; 

    rounded_frac_edited = rounded_frac[6:0];
    if (rounded_frac[7]) begin
        exp_r_edited = exp_r + 1;
    end else begin
        exp_r_edited = exp_r;
    end


    if(is_zero_a && is_zero_b) begin
        result = 8'h00;
    end else if(is_zero_a) begin
        result = b;
    end else if(is_zero_b) begin
        result = a;
    end else if(sum == 0) begin
        result = 8'h00;
    end  else if(exp_r_edited[8] == 1) begin
        result = {sign_r, 8'hFF, 7'h7F};
    end else begin
        result = {sign_r, exp_r_edited[7:0], rounded_frac_edited};
    end
    
end
endmodule



