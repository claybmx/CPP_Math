#pragma once
#include "utils.h"

namespace math {
	// Decomposi��o em FATORES PRIMOS:
	// Todo n. composto pode ser escrito num produto em que s� aparecem fatores primos, como 2, 3, 6, 7, 11, 13...etc.
	static vetorULLng *_fatoresPrimos(unsigned long long _n) { // -N = dividendo
		vetorULLng *v = new vetorULLng();
		unsigned long long i = 1; // divisor
		unsigned long long sz= static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		while(_n>1 && i++<=sz) // at� a raiz
			while(!(_n%i)) {
				v->push_back(i);
				_n /= i; // dividendo / divisor = quociente
			}
		if(_n>1) // se _n for primo
			v->push_back(_n);
		return v;
	}
	static vetorULLng _fatoresPrimos2(unsigned long long _n) { // -N = dividendo
		vetorULLng v;
		unsigned long long i = 1; // divisor
		unsigned long long sz= static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		while(_n>1 && i++<=sz) // at� a raiz
			while(!(_n%i)) {
				v.push_back(i);
				_n /= i; // dividendo / divisor = quociente
			}
		if(_n>1) // se _n for primo
			v.push_back(_n);
		return v;
	}
	// **************<<_USAGE_>>****************
	static void _fatoresPrimosUsage() {

		utils::PrintColour_("\n<<_FATORES_PRIMOS_>>\n", BRI);
		utils::PrintColour_("fatoresPrimos(84):\n", FY);

		vetorULLng *vl = _fatoresPrimos(2589);
		utils::_showVetor(*vl);

		delete vl;
	}

} // math