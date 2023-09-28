#pragma once
#include "typedefs.h"

namespace math {

	// Decomposi��o em FATORES PRIMOS (FATORA��O):
	// Todo n. composto pode ser FATORADO (separado/dividido) num produto DE fatores PRIMOS, como 2, 3, 6, 7, 11, 13...etc.
	// Assinatura digital
	vetorULLng fatoresPrimos(unsigned long long n);
	// **************<<_USAGE_>>****************
	void fatoresPrimosUsage();

} // math