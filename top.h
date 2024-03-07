#ifndef TOP_H
#define TOP_H

#include "data_types.h"
#include <hls_stream.h>
#include <ap_int.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "izhcell.h"
#include "ap_axi_sdata.h"

void arrayToStream(din_8 arr[M], hls::stream<din_8>& input_stream);

void streamToArray(hls::stream<ap_uint<4>> &output_stream, ap_uint<4> *arr);

void top_f(din_8 *data_in, ap_uint<4> *data_out);

#endif
