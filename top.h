#ifndef TOP_H
#define TOP_H

#include "data_types.h"
#include <hls_stream.h>
#include <ap_int.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "izhcell.h"

void top_f(hls::stream<din_10> &input_stream, hls::stream<ap_uint<4>> &output_stream);

#endif
