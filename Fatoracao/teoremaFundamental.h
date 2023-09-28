#pragma once
#include "..\Math\_prime.h"
#include "fatoresPrimos.h"

namespace math {

	template <typename T>
	static void showVetorLinear(T &vt) {
		for(unsigned int i=0; i<vt.size(); i++)
			std::cout << std::setw(4) << vt.at(i) << " | ";
		std::cout << std::endl;
	}

	static void _teoremaFundamental() {
		// Todo n. (composto) tem uma �nica fatora��o (assinatura) prima:
		P_("<<_Teorema Fundamental da Aritm�tica_>>")
		for(unsigned int i=0; i<100; i++) {
			if(!_prime(i)) {
				fatoresPrimos(i);
				vetorULLng vl = fatoresPrimos(i);
				showVetorLinear(vl);
			}
		}
	}

} // math