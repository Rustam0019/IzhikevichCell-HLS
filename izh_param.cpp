#include "izh_param.h"

izh_param::izh_param(){}

izh_param::izh_param(din_16 a,
					 din_16 b,
					 din_16 c,
					 din_16 d,
					 din_16 sq = 0.04,
					 din_16 mn = 5.0,
					 din_16 bias = 140.0,
					 din_16 v_th = 30.0,
					 din_16 tau_inv = 250.0,
					 din_16 alpha = 100.0)
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
