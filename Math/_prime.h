#pragma once
#include <iostream>
#include "utils.h"

namespace math {
	// N�mero PRIMO=> Apenas 2 divisores (ele pr�prio eo o n.1). N�o tem lei (ou f�rmula) de forma��o.
	// N�mero COMPOSTO=> Apresenta mais de dois divisores. O contr�rio do n. primo.
	// Se um n. � < 121 e n�o � divis�vel por 2, 3, 5 e 7 � de antem�o  um n. PRIMO.
	// Se um n. � < 289 e n�o � divis�vel por 2, 3, 5, 7, 11 e 13 n�o � um n. PRIMO.

	// Algoritmo mais r�pido:
	// Para determinar se um certo n�mero inteiro � primo basta dividi-lo por
	// todos os primos menores ou iguais � sua raiz quadrada.
	static bool _prime(const unsigned long long &_n) {
		unsigned long total= 0; // n. de testagens
		if(_n<3) // Special case: 0, 1 e 2:
			return !((_n+7)%3);
		if(!(_n%2)) // Testa divisibilidade por 2:
			return false;
		unsigned long long raiz = static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		//P_(raiz)
		unsigned long long divisor=0;
		for(unsigned long long i=3; i<=raiz; i+=2) {
			total++;
			divisor=i;
			if(!(_n%i)) {
				//P_(total)
				return false;
			}// else //div dif zero
			//	if(i >= (_n/i)) // i >= quociente
			//		return true;
		}
		//P_(total)
		//P_(divisor)
		return true;
	}
	// **************<<_USAGE_>>****************
	static void _primeUsage() {
		utils::PrintColour_("\n<<_�_PRIMO?_>>\n", BRI);
		utils::PrintColour_("Testando ns. primos de 1 � 20:\n", BYI);
		for(int i=1; i<=100; i++)
			if(_prime(i))
				P_(i)

		utils::PrintColour_("\nEste algoritmo testa os ns. primos positivos entre 1 e 18.446.744.073.709.551.615\n", BBI);

		utils::PrintColour_("Maior n. primo possivel por este algoritmo:\n", BYI);
		//P_(_prime(18446744073709551557))

		// Teste aqui qualquer n.:
		P_(_prime(25))
		int total=0;
		//for(unsigned long u=0; u<294967294; u++)
		//	if(_prime(u))
		//		total++;
	
		//utils::_showVetor(v);
		//P_(v.size())
		P_(total)
	}
} // math