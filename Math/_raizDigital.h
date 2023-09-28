#pragma once
#include "defines.h"

namespace math {

	static int _raizDigital(int _n) {
		int resto, raiz;
		raiz = 0;
		while(_n>=10) {
			//PRT_(_n)
			resto  = _n%10;
			_n   /= 10;
			//PRT_(resto)
			raiz +=resto;
			//PRT_(raiz)
		}
		raiz += _n; // somar o primeiro digito
		if(raiz>=10)
			raiz = _raizDigital(raiz);
		//P_(raiz)
		return raiz;
	}
	// **************<<_USAGE_>>****************
	static void _raizDigitalUsage() {

		utils::PrintColour_("\n<<_RAIZ_DIGITAL_>>\n", BRI);
		P_(_raizDigital(12345))
	}

} // math