#include "ifs.h"



IzhikevichState::IzhikevichState(){}
//IzhikevichState::IzhikevichState(din_10 v[M], din_10 u[M]){
//
//		for (int j = 0; j < M; ++j) {
//			this->u[j] = u[j];
//			this->v[j] = v[j];
//		}
//}


//void IzhikevichState::set(ap_fixed<64, 32> v[160], ap_fixed<64, 32> u[160]){
//
//		for (int j = 0; j < 160; ++j) {
//			this->u[j] = u[j];
//			this->v[j] = v[j];
//		}
//
//}
//
//
//v_and_u_get IzhikevichState::get(){
//            v_and_u_get v_and_u_g;
//
//			for (int j = 0; j < 160; ++j) {
//				v_and_u_g.uu[j] = u[j];
//				v_and_u_g.vv[j] = v[j];
//			}
//
//            return v_and_u_g;
//        }


void IzhikevichState::izh_feed_forward_step(hls::stream<din_8> &input_stream, hls::stream<din_1> &output_stream,
                                                                              //IzhikevichState st,
                                                                              izh_param p,
																			  ap_fixed<26, 10> dt = 0.001)
{

	din_8 v_new[M];
	din_8 u_new[M];
	din_8 tmp_var;
	din_1 str_element = 0.0;

    din_8 dst[M] = {0.0};


    for (int n = 0; n < 10; n++)
    {
		for (int j = 0; j < M; j++){
     	#pragma HLS PIPELINE

			if(!input_stream.empty() && n==0){
					input_stream.read(dst[j]);
					v_new[j]  = -70.0;
					u_new[j]  = -14.0;
			}

			tmp_var = v_new[j];
			v_new[j] = tmp_var + p.tau_inv * dt * (
					p.sq *  tmp_var * tmp_var + p.mn * tmp_var + p.bias - u_new[j] + dst[j]);

			u_new[j] = u_new[j] + p.tau_inv * dt * p.a * (p.b * tmp_var - u_new[j]);

			if((v_new[j] - p.v_th) > 0){
						str_element = 1.0;
			}
			else{
						str_element = 0.0;

			}

			v_new[j] = (1 - str_element) * v_new[j] + str_element * p.c;
			u_new[j] = (1 - str_element) *  u_new[j] + str_element * (u_new[j] + p.d);

			if(n == 9){
					output_stream.write(str_element);
			}
		}
	}
}
