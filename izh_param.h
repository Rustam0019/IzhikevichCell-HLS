#ifndef IZH_PARAM
#define IZH_PARAM

#include "data_types.h"
#define M 80

class izh_param{
    public:
        izh_param();
        izh_param(din_16 a,
                din_16 b,
                din_16 c,
                din_16 d,
                din_16 sq,
                din_16 mn,
                din_16 bias,
                din_16 v_th,
                din_16 tau_inv ,
                din_16 alpha
        );


        din_16 a;
        din_16 b;
        din_16 c;
        din_16 d;
        din_16 sq;
        din_16 mn;
        din_16 bias;
        din_16 v_th;
        din_16 tau_inv;
        din_16 alpha;

};

#endif
