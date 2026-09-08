//newton fp8_div used for softmax and layernorm
module fp8_div (
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][15:0] ins,
    input logic signed [15:0] con,
    input logic compute_state,
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

//     module soft_counter 
// (input logic clk,
//  input logic rst_n,
//  input logic en,
//  input logic clr,
//  output logic [3:0] out);

    logic [3:0] softmax_cnt;
    logic softmax_inc, softmax_full;
    soft_counter count (.clk(clk), .rst_n(rst_n), .en(softmax_inc), .clr(softmax_clr), .out(softmax_cnt));

    // module softmax_fsm(
    // input logic clk,
    // input logic rst_n,
    // input logic start,   
    // input logic compute_state,
    // input logic done_computing,
    // output logic first,
    // output logic softmax_computing,
    // output logic clr);


    logic done_computing, fsm_start, first, softmax_computing, softmax_clr;
    //fsm starts once the softmax row is not full and we are in the compute_state with a valid input
    assign fsm_start = compute_state && valid;
    assign softmax_full = softmax_cnt == 4'd15;
    assign done_computing = softmax_cnt == softmax_cnt_full;

    //no we need to add it so it updates in real time.

    softmax_fsm fsm(.clk(clk), 
                    .rst_n(rst_n), 
                    .start(fsm_start), 
                    .compute_state(compute_state), 
                    .done_computing(done_computing), 
                    .first(first), 
                    .softmax_computing(softmax_computing), 
                    .clr(softmax_clr));

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
    assign log_and_max = log_result + max;
    

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            for (int i = 0; i < 4; i++) softmax_out[i] <= 0;
        end else begin
            for (int i = 0; i < 4; i++) softmax_out[i] <= ins_s5[i] - log_and_max;
            if(valid) begin
                softmax_inc <= 1;
            end else begin
                softmax_inc <= 0;
            end //we will pipeline valid all the through
        end
    end
    //ADD MORE

endmodule

module softmax_fsm(
    input logic clk,
    input logic rst_n,
    input logic start,   
    input logic compute_state,
    input logic done_computing,
    output logic first,
    output logic softmax_computing,
    output logic clr);

    typedef enum logic [5:0] {IDLE, FIRST, COMPUTE, DONE} state_t;
    state_t current_state, next_state;

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <=  next_state;
        end
    end
    
    always_comb begin
        next_state = current_state;
        first = 0;
        softmax_computing = 0;
        clr = 0;
        case(current_state)
            IDLE: begin
                if(start) begin
                    next_state = FIRST;
                end else begin
                    next_state = COMPUTE;               
                end
            end
            FIRST : begin
                first = 1;
                softmax_computing = 1;
                next_state = COMPUTE;
            end
            COMPUTE : begin
                if(done_computing) begin
                    next_state = COMPUTE;
                    softmax_computing = 1;
                end else begin
                    next_state = DONE;
                end
            end
            DONE: begin
                clr = 1;
                next_state = IDLE;
            end
        endcase
    end
endmodule


module soft_counter 
(input logic clk,
 input logic rst_n,
 input logic en,
 input logic clr,
 output logic [4:0] out);

 always_ff @(posedge clk, negedge rst_n) begin
    if(!rst_n)begin
        out <= '0;
    end else begin
        if(clr)begin
            out <= '0;
        end else if (en) begin
            out <= out + 8'd4;
        end
    end
 end

endmodule