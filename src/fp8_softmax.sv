//fp_softmax used for softmax and layernorm
module fp8_softmax (
    input logic clk,
    input logic rst_n,
    input logic signed [3:0][15:0] ins,
    input logic signed [15:0] con,
    input logic compute_state,
    input logic clr,
    input logic valid,
    output logic signed[3:0][15:0] out,
    output logic out_valid);

    localparam int W_BITS = 4;

    logic [15:0] max;
    logic [3:0][15:0] ins_s2;
    logic [3:0][15:0] ins_s3_sub;
    logic [15:0] sub_val;
    logic [15:0] sum_0, sum_1, prelog_sum;

    logic [15:0] sum;

    logic [15:0] updated_max, old_max;

    logic [15:0] updated_max_s2, old_max_s2;
    logic [15:0] updated_max_s3, old_max_s3_p;
    logic [15:0] updated_max_s4, old_max_s4_p;
    logic [15:0] s5_updated_max, s5_old_max;
    logic [15:0] s6_updated_max, s6_old_max;

    logic [3:0][15:0] sub_result_s3;
    logic [15:0] old_max_s3, max_s3, sum_s3;
    logic [15:0] old_max_s4, max_s4;
    logic [3:0][3:0] idx_s4;
    logic [3:0][3:0] w_s4;
    logic [3:0][15:0] k_s4;
    logic [3:0][15:0] ins_s5;
    logic [3:0][15:0] results_s5, result_s5;
    logic [3:0][15:0] shifted_value_s5;
    logic [3:0][15:0] s5_k;
    logic [15:0] sum_s4, sum_s5, sum_s6, sum_s7;
    logic [3:0][15:0] ins_s6;
    logic [3:0][15:0] shifted_value_s6;
    logic [3:0][15:0] ins_s7;

    logic [3:0][15:0] ins_s3, ins_s4;

    logic valid_s2, valid_s3, valid_s4, valid_s5, valid_s6;
    logic in_valid;
    assign in_valid = valid_s6;

    logic [4:0] s7_curr_val_stored;
    logic s7_inc_max_cnt;
    logic [15:0] s7_stored_values [0:15];

    logic s6_inc_max_cnt;
    logic [4:0] max_count_cnt;

        function automatic logic [9:0] log2_lut(
        input logic [3:0] addr
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
        input logic [3:0] addr
    );
        case (addr)
            4'd0: return 11'h400;  // f=1.000  log2=0.000000
            4'd1: return 11'h45D;  // f=1.125  log2=0.169925
            4'd2: return 11'h4C2;  // f=1.250  log2=0.321928
            4'd3: return 11'h530;  // f=1.375  log2=0.459432
            4'd4: return 11'h5A8;  // f=1.500  log2=0.584963
            4'd5: return 11'h62B;  // f=1.625  log2=0.700440
            4'd6: return 11'h6BA;  // f=1.750  log2=0.807355
            4'd7: return 11'h756;  // f=1.875  log2=0.906891
            4'd8: return 11'h800;  // f=2.000  log2=1.000000
        endcase
    endfunction

    logic [3:0] max_cnt;
    logic softmax_inc, softmax_full, done_log_sum, done_find_max;
    logic in_log_sum, in_compute_max, in_first;

    //softmax

    soft_counter max_count_fsm (.clk(clk), .rst_n(rst_n), .en(s6_inc_max_cnt), .clr(softmax_clr), .out(max_count_cnt));



    logic done_computing, fsm_start, first, softmax_computing, softmax_clr;
    //fsm starts once the softmax row is not full and we are in the compute_state with a valid input

    assign fsm_start = compute_state && valid;
    assign done_log_sum = max_count_cnt == 4'd4;
    assign in_first = max_count_cnt == 4'd1; //first iteration we don't rescale max or sum at all so we check for this


    //no we need to add it so it updates in real time.

    softmax_fsm fsm(.clk(clk),
                    .rst_n(rst_n),
                    .start(fsm_start),
                    .compute_state(compute_state),
                    .done_find_max(done_find_max),
                    .done_log_sum(done_computing),
                    .first(first),
                    .in_log_sum(in_log_sum),
                    .in_compute_max(in_compute_max),
                    .clr(softmax_clr));
    logic [15:0] chunk_max, chunk_max_intermediate_1, chunk_max_intermediate_2;

    always_comb begin
        chunk_max_intermediate_1 = (ins[0] > ins[1]) ? ins[0] : ins[1];
        chunk_max_intermediate_2 = (ins[2] > ins[3]) ? ins[2] : ins[3];
        chunk_max = (chunk_max_intermediate_1 > chunk_max_intermediate_2) ? chunk_max_intermediate_1 : chunk_max_intermediate_2;
        old_max     = max;
        if(first) begin
            updated_max = chunk_max;
        end else begin
            updated_max = (max > chunk_max) ? max : chunk_max; //update max based on old max
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            max <= '0;
        end else if(in_compute_max) begin
            max <= updated_max;
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin //S1 stage;
        if(!rst_n) begin
            sum <= '0;
            for(int i = 0; i < 4;i++) begin
                ins_s2[i] <= 0;
            end
            valid_s2 <= 0;
            updated_max_s2 <= 0;
            old_max_s2 <= 0;
        end else begin
            if(in_compute_max) begin
                if(!in_first) sum <= sum_s7;
                ins_s2 <= ins;
                valid_s2 <= valid;
                updated_max_s2 <= updated_max;
                old_max_s2 <= old_max;
            end
        end
    end

    genvar ii;
    generate
        for(ii = 0 ii < 4; ii++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    sub_result_s3[i] <= 0;
                    ins3[i] <= 0;
                end else begin
                    sub_result_s3[i] <= ins_s2[i] - updated_max_s2;
                    ins_s3[i] <= ins_s2[i];
                end
            end 
        end
    endgenerate

     always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            old_max_s3 <= 0;
            max_s3 <= 0;
            sum_s3 <= 0;
            valid_s3 <= 0;
            updated_max_s3 <= 0;
            old_max_s3_p <= 0;
        end else begin
            valid_s3 <= valid_s2;
            updated_max_s3 <= updated_max_s2;
            old_max_s3_p <= old_max_s2;
        end
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            old_max_s4 <= 0;
            max_s4 <= 0;
            valid_s4 <= 0;
            updated_max_s4 <= 0;
            old_max_s4_p <= 0;
        end else begin
            if(first) begin
                //pasthrough
            end else begin
                if(in_compute_max) begin
                    valid_s4 <= valid_s3;
                    updated_max_s4 <= updated_max_s3;
                    old_max_s4_p <= old_max_s3_p;
                end
            end
        end
    end

     
    genvar iii;
    generate
        for(iii = 0 iii < 4; iii++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    idx_s4[iii] <= 0;
                    w_s4[iii] <= 0;
                    k_s4[iii] <= 0;
                    ins_s4[iii] <= 0;
                end else begin
                    if(in_compute_max && !first) begin
                        idx_s4[iii] <= sub_result_s3[iii][6:4];
                        w_s4[iii]   <= sub_result_s3[iii][3:0];
                        k_s4[iii]   <= sub_result_s3[iii][15:7];
                        ins_s4[iii] <= ins_s3[iii];
                    end
                end
            end 
        end
    endgenerate


    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < 4;i++) begin
                ins_s5[i] <= 0;
                results_s5[i] <= 0;
                result_s5[i] <= 0;
                shifted_value_s5[i] <= 0;
                s5_k[i] <= 0;
            end
            sum_s5 <= 0;
            valid_s5 <= 0;
            s5_updated_max <= 0;
            s5_old_max <= 0;
        end else begin
            if(in_compute_max) begin
                if(!in_first) sum_s5 <= sum_s4;
                 // should be some value for k that will pipe into the next stage;
                valid_s5 <= valid_s4;
                s5_updated_max <= updated_max_s4;
                s5_old_max <= old_max_s4_p;
            end
        end
    end


    genvar iii;
    generate
        for(iii = 0 iii < 4; iii++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    ins_s5[i] <= 0;
                    results_s5[i] <= 0;;
                    s5_k[i] <= 0;
                end else begin
                    if(in_compute_max) begin
                        result_s5[i] <= exp2_lut(idx_s4[i]) + ((w_s4[i]*(exp2_lut(idx_s4[i]+1) - exp2_lut(idx_s4[i]))) >> W_BITS); //maybe need to be a genvar
                        s5_k[i] <= k_s4[i];
                        ins_s5[i] <= ins_s4[i];
                    end
                end
            end 
        end
    endgenerate

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < 4; i++) begin
                shifted_value_s6[i] <= 0;
                ins_s6[i] <= 0;
            end
            sum_s6 <= 0;
            valid_s6 <= 0;
            s6_updated_max <= 0;
            s6_old_max <= 0;
        end else begin
            if(in_compute_max) begin
                for(int i = 0; i < 4; i++) begin
                    ins_s6[i] <= ins_s5[i];
                    shifted_value_s6[i] <= result_s5[i] >>> (-s5_k[i]);
                end
                sum_s6 <= sum_s5;
                valid_s6 <= valid_s5;
                s6_updated_max <= s5_updated_max;
                s6_old_max <= s5_old_max;
            end
        end
    end

    always_comb begin
        sum_1 = shifted_value_s6[0] + shifted_value_s6[1];
        sum_0 = shifted_value_s6[2] + shifted_value_s6[3];
        prelog_sum = sum_0 + sum_1;
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            sum_s7 <= 0;
            s7_inc_max_cnt <= 0;
            s7_curr_val_stored <= 0;
            s7_updated_max <= 0;
            s7_valid <= 0;
            for(int i = 0; i < 4; i++) ins_s7[i] <= 0;
        end else begin
            if(in_compute_max) begin
                sum_s7 <= prelog_sum + (sum_s7 >> (s6_updated_max - s6_old_max));
                if(in_valid && in_compute_max) begin
                    s7_inc_max_cnt <= 1; // increase the counter for how many interations this needs to go through
                end else begin
                    s7_inc_max_cnt <= 0; //other wise we don't care
                end
                for(int i = 0; i < 4; i++) begin
                    s7_stored_values[s7_curr_val_stored + i] <= ins_s6[i];
                end
                s7_updated_max <= s6_updated_max;
                s7_curr_val_stored <= s7_curr_val_stored + 4'd4;
            end
        end
    end

    assign s6_inc_max_cnt = s7_inc_max_cnt;

    //make sure to loop back with sum

    //always_ff block heres
    //all after loop and then this happens once

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            s8_stored_values <= 0;
            s8_sum <= 0;
            s8_updated_max <= 0;
            s8_valid;
        end else begin
            if(in_log_sum) begin
                s8_stored_values <= s7_stored_values;
                s8_sum <= s7_sum;
                s8_done_computing <= s7_done_computing;
                s8_updated_max <= s7_updated_max;
                s8_valid <= s7_valid;
            end
        end
    end


    always_comb begin
        one_pos = 0;
        f = 0;
        idx = 0;
        w = 0;
        for(int i = MAX_WIDTH-1; i > 0; i++) begin
            if(s8_sum[i]) begin
                one_pos = i; //priority encoder for the MSB on
        end

        f_frac = sum >>> one_pos; // this is a hardware split
        idx = f_frac[6:4];   // top 3 bits -> which edge pair
        w   = f_frac[3:0];
    end
    

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            idx_s9 <= 0;
            w_s9 <= 0;
            one_pos_s9 <= 0;
            updated_max_s9 <= 0;
            stored_values_s9 <= 0;
            valid_s9 <= 0;
        end else begin
            if(is_log_sum) begin
                idx_s9 <= idx;
                w_s9 <= w;
                one_pos_s9 <= one_pos;
                updated_max_s9 <= s8_updated_max;
                stored_values_s9 <= stored_values_s8;
                valid_s9 <= valid_s8;
            end
        end
    end

    //pipeline stage here
    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            result_s10 <= 0;
            one_pos_s10 <= 0;
            updated_max_s10 <= 0;
            stored_values_s10 <= '0;
            valid_s10 <= 0;
        end else begin
            if(is_log_sum) begin
                result_s10 <= log2_lut[idx] + (w*(log2_lut[idx+1] - log2_lut[idx]) >> W_BITS);
                one_pos_s10 <= one_pos_s9;
                updated_max_s10 <= updated_max_s9;
                stored_values_s10 <= stored_values_s9;
                valid_s10 <= valid_s9;
            end
        end
    end

    assign log_result = result_s10 + one_pos;
    assign log_and_max = log_result + max;

    genvar j;
    generate
        for(j = 0; j < 15; j++) begin
            always_ff @(posedge clk, negedge rst_n) begin
                if(!rst_n) begin
                    softmax_out[i] <= 0;
                end else begin
                    if(is_log_sum) softmax_out[i] <= s10_stored_values[i] - log_and_max;
                end
            end
        end
    endgenerate

    always_ff @(posedge clk, negedge rst_n) begin
        if(!rst_n) begin
            out_valid <= 0;
        end else begin
            if(valid_s10 && is_log_sum) begin
                out_valid <= 1;
            end
        end
    end
    //ADD MORE

endmodule

module softmax_fsm(
    input logic clk,
    input logic rst_n,
    input logic start,
    input logic compute_state,
    input logic done_find_max,
    input logic done_log_sum,
    output logic first,
    output logic in_log_sum,
    output logic in_compute_max,
    output logic clr);

    typedef enum logic [5:0] {IDLE, FIND_MAX, LOG_SUM, DONE} state_t;
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
        in_compute_max = 0;
        in_log_sum = 0;
        clr = 0;
        case(current_state)
            IDLE: begin
                if(start) begin
                    next_state = FIND_MAX;
                end else begin
                    next_state = IDLE;
                end
            end
            FIND_MAX : begin
                if(done_find_max) begin
                    next_state = LOG_SUM;
                end else begin
                    next_state = FIND_MAX;
                    in_compute_max = 1;
                end
            end
            LOG_SUM : begin
                if(done_log_sum) begin
                    next_state = DONE;
                end else begin
                    in_log_sum = 1;
                    next_state = LOG_SUM;
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