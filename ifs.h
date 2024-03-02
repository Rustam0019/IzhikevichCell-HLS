#ifndef IFS_H
#define IFS_H

#include "izh_param.h"
#include <hls_stream.h>

//#define ArraySize1 160

//struct v_and_u_get {
//        ap_fixed<64, 32> vv[ArraySize1];
//        ap_fixed<64, 32> uu[ArraySize1];
//        };

class IzhikevichState{
    public:

        IzhikevichState();
        //template<size_t N, size_t M>
        IzhikevichState(din_16 v[M], din_16 u[M]);
        void izh_feed_forward_step(hls::stream<din_16> &input_stream, hls::stream<ap_uint<4>> &output_stream,
        															//IzhikevichState st,
                                                                    izh_param p,
																	din_16 dt);

        //v_and_u_get get();
        //void set(ap_fixed<64, 32> v[160], ap_fixed<64, 32> u[160]);

    private:
        din_16 v[M];
        din_16 u[M];

};

#endif
