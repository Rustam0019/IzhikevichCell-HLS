//#include "izh_spiking_behavior.h"
//
//izh_spiking_behavior::izh_spiking_behavior(){}
//
//izh_spiking_behavior::izh_spiking_behavior(char method)
//{
//     if(method == 't'){
//          izh_param tonic_spiking_p(0.02, 0.2, -65.0, 6.0, 0.04, 5.0, 140.0, 30.0, 250.0, 100.0);
//          this->p =tonic_spiking_p;
//          ap_fixed<64, 32> v[160], u[160];
//
//		for (int j = 0; j < 160; ++j) {
//			u[j] = -70.0 * 0.2;
//			v[j] = -70.0;
//		}
//
//	   IzhikevichState s(v,u);
//	   this->st = s;
//     }
//      else{
//
//      }
//
//
//      izh_param tonic_spiking_p(a = 0.02, b = 0.2, c = -65, d = 6);
//      izh_spiking_behavior tonic_spiking(tonic_spiking_p, s);
//
//      izh_param p(a = a, b = b, c = c,d = d, tau_inv = tau_inv);
//      izh_spiking_behavior behavior(p, s);
//     return behavior;
//}
