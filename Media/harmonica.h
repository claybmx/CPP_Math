#pragma once
#include <stdarg.h> // IMPORTANT! MUST BE INCLUDED!

namespace media {
	// M�dia Harm�nica:
	//            n 
	// h = _________________
	//     1    1    1    1
	//     __ + __ + __ + __
	//     x1   x2   x3   xn 
	static double _harmonica(int _n,...) {
		double soma = 0.0;
		double n = _n;
		int sz   = _n;
		double *x = new(std::nothrow) double[_n];
	
		va_list args;
		va_start(args, _n); // initialize argptr
		while(_n--)
			x[_n] = va_arg(args, double);
		va_end(args);
		// n / (1/x1 + 1/x2 + 1/x3 + 1/xn)
		for(int i=0; i<sz; i++)
			soma += 1/x[i];

		//delete x;
		return n / soma;
	}
	// **************<<_USAGE_>>****************
	static void _harmonicaUsage() {
		// Problema: Neste exemplo usar vel. HARM�NICA e n�o aritm�tica.
		// Um autom�vel subiu uma ladeira na vel. m�dia de 60km/h e, em seguida, desceu-a com a vel. m�dia de
		// 100km/h. Calcule a VELOCIDADE M�DIA:
		P_(_harmonica(2, 60.0,100.0))
	}
}
