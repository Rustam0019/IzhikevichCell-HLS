#include "izhcell.h"



IzhikevichCell::IzhikevichCell(){}


void IzhikevichCell::calc(hls::stream<din_8> &input_stream, hls::stream<ap_uint<4>> &output_stream){

		 izh_param tonic_spiking_p(0.02, 0.2, -65.0, 6.0, 0.04, 5.0, 140.0, 30.0, 250.0, 100.0);
         IzhikevichState st;
         //izh_param p = isb.p;
         st.izh_feed_forward_step(input_stream,output_stream, tonic_spiking_p, 0.001);

}
