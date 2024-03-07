#ifndef IZHCELL_H
#define IZHCELL_H

#include "ifs.h"
#include "izh_spiking_behavior.h"


class IzhikevichCell{
    public:

        IzhikevichCell();
        void calc(hls::stream<din_8> &input_stream, hls::stream<ap_uint<4>> &output_stream);

};

#endif
