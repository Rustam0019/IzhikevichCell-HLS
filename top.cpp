#include "top.h"





void top_f(hls::stream<din_16> &input_stream, hls::stream<ap_uint<4>> &output_stream) {

		IzhikevichCell l;

		l.calc(input_stream, output_stream);

}
