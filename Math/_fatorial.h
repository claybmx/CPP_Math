#pragma once
#include <iostream>
#include "defines.h"

namespace math {
	// Fatorial é uma definição de números naturais. (não se aplica a decimais.
	// n! = n.(n-1).(n-2)...3.2.1
	// Definição=> É a multiplicação de todos os ns naturais de 1 até n. (ele mesmo)
	static unsigned long long _factorial(const int &_a) {
		if(_a>1)
			return _a*_factorial(_a-1);
		else
			return 1;
	}
	// **************<<_USAGE_>>****************
	static void _fatorialUsage() {
		utils::PrintColour_("<<_FACTORIAL TABLE (0-20)_>>\n", FRI);
		for(int i=0; i<=20; i++)
			std::cout << "f(" << i << ")=>" << _factorial(i) << std::endl;
	}

} // math