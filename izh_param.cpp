#include "izh_param.h"

izh_param::izh_param(){}

izh_param::izh_param(din_10 a,
					 din_10 b,
					 din_10 c,
					 din_10 d,
					 din_10 sq = 0.04,
					 din_10 mn = 5.0,
					 din_10 bias = 140.0,
					 din_10 v_th = 30.0,
					 din_10 tau_inv = 250.0,
					 din_10 alpha = 100.0)
{
     this->a = a;
     this->b = b;
     this->c = c;
     this->d = d;
     this->sq = sq;
     this->mn = mn;
     this->bias = bias;
     this->v_th = v_th;
     this->tau_inv = tau_inv;
     this->alpha = alpha;

}
