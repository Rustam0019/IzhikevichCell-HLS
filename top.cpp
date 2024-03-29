#include "top.h"


void arrayToStream(din_8 *arr, hls::stream<din_8>& input_stream) {
#pragma HLS INLINE
    for (int i = 0; i < M; ++i) {
	#pragma HLS PIPELINE
    	input_stream.write(arr[i]);
    }
}

void streamToArray(hls::stream<din_1> &output_stream, din_1 *arr) {
#pragma HLS INLINE
	for(int i = 0; i < M; i++){
#pragma HLS PIPELINE
	    	if(!output_stream.empty()){
	    		output_stream.read(arr[i]);
		}
	}
}


void top_f(din_8 *data_in, din_1 *data_out) {

		#pragma HLS INTERFACE mode = s_axilite port = return bundle = control
		#pragma HLS INTERFACE mode = m_axi port = data_in bundle = input offset = slave depth = 80
		#pragma HLS INTERFACE mode = s_axilite port = data_in bundle = control
		#pragma HLS INTERFACE mode = m_axi port = data_out bundle = output offset = slave depth = 80
		#pragma HLS INTERFACE mode = s_axilite port = data_out bundle = control


//		#pragma HLS INTERFACE mode = axis port = input_stream
//		#pragma HLS INTERFACE mode = axis port = output_stream
//		#pragma HLS INTERFACE mode = axis port = input_stream bundle = input offset = slave
//		#pragma HLS INTERFACE mode = s_axilite port = data_in bundle = control
//		#pragma HLS INTERFACE mode = m_axi port = data_in bundle = input offset = slave
//		#pragma HLS INTERFACE mode = m_axi port = data_out bundle = output offset = slave
//		#pragma HLS INTERFACE mode = s_axilite port = data_out bundle = control



		hls::stream<din_8> input_stream;
		hls::stream<din_1> output_stream;
		#pragma HLS STREAM variable=input_stream depth=80
		#pragma HLS STREAM variable=output_stream depth=80


		//IzhikevichCell l;
		//#pragma HLS DATAFLOW
		arrayToStream(data_in, input_stream);
		calc(input_stream, output_stream);


		//l.calc(input_stream, output_stream);

		streamToArray(output_stream, data_out);


}
