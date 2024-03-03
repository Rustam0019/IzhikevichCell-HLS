#ifndef IZH_PARAM
#define IZH_PARAM

#include "data_types.h"
#define M 80

class izh_param{
    public:
        izh_param();
        izh_param(din_10 a,
                din_10 b,
                din_10 c,
                din_10 d,
                din_10 sq,
                din_10 mn,
                din_10 bias,
                din_10 v_th,
                din_10 tau_inv ,
                din_10 alpha
        );


        din_10 a;
        din_10 b;
        din_10 c;
        din_10 d;
        din_10 sq;
        din_10 mn;
        din_10 bias;
        din_10 v_th;
        din_10 tau_inv;
        din_10 alpha;

};

#endif
