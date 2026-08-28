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
            ins_s1 <= in_s2;
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < 4;i++) begin
                ins_s3[i] <= 0;
            end
        end else begin
            for(int i = 0; i < 4;i++) begin
                ins_s3[i] <= (1 << (ins_s2[i] - max));
            end
        end
    end

    always_comb begin
        sum_1 = ins_s3[0] + ins_s3[1];
        sum_0 = ins_s3[2] + ins_s3[3];
        pre_log_sum = sum_0 + sum_1;
    end
    

endmodule