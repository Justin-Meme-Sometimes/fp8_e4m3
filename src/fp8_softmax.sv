//newton fp8_div used for softmax and layernorm
module fp8_div (
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][15:0] ins,
    input logic signed [15:0] con,
    input logic clr,
    input logic valid,
    output logic signed[3:0][15:0] out,
    output logic out_valid);

    logic [15:0] max;
    logic [3:0][15:0] ins_s2;
    logic [3:0][15:0] ins_s3_sub;
    logic [15:0] sub_val;
    logic [15:0] sum_0, sum_1, prelog_sum;

        function automatic logic [9:0] log2_lut(
        input logic [3:0] addr,
    );
        case (addr)
            4'd0: return 10'h000;  // f=1.000  log2=0.000000
            4'd1: return 10'h0AE;  // f=1.125  log2=0.169925
            4'd2: return 10'h14A;  // f=1.250  log2=0.321928
            4'd3: return 10'h1D6;  // f=1.375  log2=0.459432
            4'd4: return 10'h257;  // f=1.500  log2=0.584963
            4'd5: return 10'h2CD;  // f=1.625  log2=0.700440
            4'd6: return 10'h33B;  // f=1.750  log2=0.807355
            4'd7: return 10'h3A1;  // f=1.875  log2=0.906891
            4'd8: return 10'h400;  // f=2.000  log2=1.000000
        endcase
    endfunction

    function automatic logic [10:0] exp2_lut(
        input logic [3:0] addr,
    );
        case (addr)
            4'd0: return 10'h400;  // f=1.000  log2=0.000000
            4'd1: return 10'h45D;  // f=1.125  log2=0.169925
            4'd2: return 10'h4C2;  // f=1.250  log2=0.321928
            4'd3: return 10'h530;  // f=1.375  log2=0.459432
            4'd4: return 10'h5A8;  // f=1.500  log2=0.584963
            4'd5: return 10'h62B;  // f=1.625  log2=0.700440
            4'd6: return 10'h6BA;  // f=1.750  log2=0.807355
            4'd7: return 10'h756;  // f=1.875  log2=0.906891
            4'd8: return 10'h800;  // f=2.000  log2=1.000000
        endcase
    endfunction

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            max <= '0;
            sum <= '0;
            for(int i = 0; i < 4;i++) begin
                ins_s2[i] <= 0;
            end
        end else begin
            for(int i = 0; i < 4; i++) begin
                if(max > ins[i]) begin
                    max <= ins[i];
                end
            end
            ins_s2 <= ins;
            idx_s2 <= ins_s2[6:4];   // top 3 bits -> which edge pair
            w_s2   <= ins_s2[3:0];
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < 4;i++) begin
                ins_s3[i] <= 0;
            end
        end else begin
            for(int i = 0; i < 4;i++) begin
                result_s3[i] <= exp2_lut[idx_s2] + ((w*exp2_lut[idx_s2+1] - exp2_lut[idx_s2]));
            end
        end
    end

    always_comb begin
        sum_1 = ins_s3[0] + ins_s3[1];
        sum_0 = ins_s3[2] + ins_s3[3];
        pre_log_sum = sum_0 + sum_1;
    end
    
    //always_ff block here

    always_comb begin
        one_pos = 0;
        f = 0;
        for(int i = 0; i < MAX_WIDTH; i++) begin
            if(sum[i]) begin
                one_pos = i; //priority encoder for the MSB on
        end

        f_frac = (sum >>> (1 <<< k)); // this is a hardware split
    end


    assign idx = f_frac[6:4];   // top 3 bits -> which edge pair
    assign w   = f_frac[3:0];

    assign result = log2_lut[idx] + ((w*log2_lut[idx+1] - log2_lut[idx]) >> W_BITS);
    assign log_result = f_frac + one_pos;

    
    
    

endmodule