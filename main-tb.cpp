#include "main-tb.h"




int main() {

	int status = 0;


//	ap_fixed<64, 32> data[16][10] = {{-11.2856,  12.5601, -22.6230, -42.1888,  29.5815,   3.9130,  14.0768,
//									              6.8844,   2.0692,   2.0470},
//									           { 27.3826,  -2.3833, -35.7572,   0.7960, -17.3267, -26.2131, -25.1010,
//									             10.1819, -39.5745,   3.4409},
//									           {-42.2464,  15.5056,   4.6480, -31.2387,  -5.1035,   6.8320,   8.4512,
//									             -6.2622, -16.4483,  -1.3151},
//									           { 22.4814, -13.1921,  20.5481,  12.0252,  18.1522,   4.5593, -20.0331,
//									            -13.1020,  15.1464,  -8.1856},
//									           { -1.0633,  13.1285,  23.6992,  -9.0045,  21.4244,   1.7608,  -3.0258,
//									             -4.0829,   3.5617,  12.4716},
//									           { 29.3562,   7.0494,  16.1412,  29.9099,  35.6355, -14.3467,   9.6037,
//									             32.1924,   9.8990,   0.6057},
//									           {-23.2219,  19.5415,  33.3260,   7.4520, -20.6234,   1.9280, -29.2556,
//									            -22.2142,  -9.1818,  19.9576},
//									           { -3.6938, -13.2605,   0.3182,  -3.0784,   8.5699,  20.8488, -23.8970,
//									            -22.2484, -18.0548,  33.0999},
//									           { -9.5613,  20.3617,  14.9233,  -0.2112,  18.3025,  -6.5900,  -1.1206,
//									            -10.8443, -26.4544,  12.8335},
//									           {  2.2951,   4.4132,  15.0587,  10.4780, -27.4883, -24.4739,   8.8054,
//									             19.5789,   4.7653,  20.5549},
//									           {-31.1465,  -1.5752,  16.7328,  10.0134,  16.6985,  22.7005,  -8.1799,
//									            -21.6595, -10.2948, -14.0630},
//									           {-16.1484,   4.9816,   4.3189,   9.5871,  49.6123,   1.5906, -11.8768,
//									            -21.1384,   4.3483,  -7.5326},
//									           {  7.2322,   1.7138,   8.9760, -32.3850,  -7.4202,  30.9243,  39.7061,
//									             -3.0451, -33.3436,  29.4836},
//									           { -2.4252, -31.3707,  -7.7567, -13.0482, -21.2844, -21.1236,  -3.6471,
//									              3.7559,  27.0860,  -1.9289},
//									           {  1.6633,  27.0777,  11.2366,  30.3871,  26.2371, -28.3970,  20.1690,
//									            -12.6953,   1.5086,  -0.2226},
//									           {-39.4015, -10.0829,  -2.4765,   2.1970, -10.1910,  24.3050,  10.5641,
//									              2.1270,   5.3085,  29.6603}};


//	ap_fixed<64, 32> data[160] = {-11.2856,  12.5601, -22.6230, -42.1888,  29.5815,   3.9130,  14.0768,
//										              6.8844,   2.0692,   2.0470,
//										            27.3826,  -2.3833, -35.7572,   0.7960, -17.3267, -26.2131, -25.1010,
//										             10.1819, -39.5745,   3.4409,
//										           -42.2464,  15.5056,   4.6480, -31.2387,  -5.1035,   6.8320,   8.4512,
//										             -6.2622, -16.4483,  -1.3151,
//										            22.4814, -13.1921,  20.5481,  12.0252,  18.1522,   4.5593, -20.0331,
//										            -13.1020,  15.1464,  -8.1856,
//										            -1.0633,  13.1285,  23.6992,  -9.0045,  21.4244,   1.7608,  -3.0258,
//										             -4.0829,   3.5617,  12.4716,
//										            29.3562,   7.0494,  16.1412,  29.9099,  35.6355, -14.3467,   9.6037,
//										             32.1924,   9.8990,   0.6057,
//										           -23.2219,  19.5415,  33.3260,   7.4520, -20.6234,   1.9280, -29.2556,
//										            -22.2142,  -9.1818,  19.9576,
//										            -3.6938, -13.2605,   0.3182,  -3.0784,   8.5699,  20.8488, -23.8970,
//										            -22.2484, -18.0548,  33.0999,
//										            -9.5613,  20.3617,  14.9233,  -0.2112,  18.3025,  -6.5900,  -1.1206,
//										            -10.8443, -26.4544,  12.8335,
//										             2.2951,   4.4132,  15.0587,  10.4780, -27.4883, -24.4739,   8.8054,
//										             19.5789,   4.7653,  20.5549,
//										           -31.1465,  -1.5752,  16.7328,  10.0134,  16.6985,  22.7005,  -8.1799,
//										            -21.6595, -10.2948, -14.0630,
//										           -16.1484,   4.9816,   4.3189,   9.5871,  49.6123,   1.5906, -11.8768,
//										            -21.1384,   4.3483,  -7.5326,
//										             7.2322,   1.7138,   8.9760, -32.3850,  -7.4202,  30.9243,  39.7061,
//										             -3.0451, -33.3436,  29.4836,
//										            -2.4252, -31.3707,  -7.7567, -13.0482, -21.2844, -21.1236,  -3.6471,
//										              3.7559,  27.0860,  -1.9289,
//										             1.6633,  27.0777,  11.2366,  30.3871,  26.2371, -28.3970,  20.1690,
//										            -12.6953,   1.5086,  -0.2226,
//										           -39.4015, -10.0829,  -2.4765,   2.1970, -10.1910,  24.3050,  10.5641,
//										              2.1270,   5.3085,  29.6603};


	din_8 data[80] ={
					 -12.3003,  -9.4459,  13.8447, -24.9656,  23.0509,   9.2109, -23.9942,
			           1.7930,  12.1285, -14.6494,
			          9.9675, -20.4346, -10.7302,   9.3592,  -3.3773,   7.5162, -12.6506,
			          -8.5321,   3.5377, -19.9976,
			         -0.9315,  18.6943,  11.2332,  -2.5082,   2.9465, -11.9691,  18.3707,
			         -13.5271,   5.9057,  14.9747,
			          1.8992,   4.0426,  -7.2674, -12.2291, -16.7161,  15.3163,  27.2383,
			           0.9657, -13.8027,  18.1414,
			         -7.2239, -13.5644, -22.9568,   3.2705,   0.0442, -15.5742, -13.1019,
			           9.6933,   0.2425,  11.7215,
			         12.8515,  13.7974,   2.3440,  -5.0638,   1.4465,  14.9965,   2.1148,
			          23.7598,  -6.1190,  -9.7545,
			         11.6434,  -2.2391,   9.6109,   4.8716,  39.1596, -36.7800,  19.3579,
			          -0.3744,  -6.6159,  -2.1894,
			         10.1642,  16.7856, -17.8254, -28.8087, -20.4570,   1.6148, -20.7001,
			           7.0804,  -6.9938,  19.5314
		};



		ap_uint<4> out_val[M];

		top_f(data, out_val);




		std::ifstream refFile("reference_data1.txt");
			if (!refFile.is_open()) {
				std::cerr << "Failed to open reference data file." << std::endl;
				return -1;
			}





			for (int k = 0; k < M; ++k) {

					ap_uint<4> refValue;
					refFile >> refValue;
					//if(output_stream.read_nb(out_val[k])){
						std::cout << out_val[k] << " ";

						if((k + 1) % 10 == 0 && (k+1) >= 10){
							std::cout <<  std::endl;
						}
						if ( out_val[k] != refValue) {
							std::cout << "Mismatch at [" << k << "]: HLS output = "
									  << out_val[k] << ", Reference output = " << refValue << std::endl;
							status = 1;
						}
					//}
				}

		std::cout <<  std::endl;


	   refFile.close();


	if (status == 0) {
		std::cout << "Test Passed" << std::endl;
	} else {
		std::cout << "Test Failed" << std::endl;
	}

	return status;
}
