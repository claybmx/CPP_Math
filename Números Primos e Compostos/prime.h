#pragma once
#include <iostream>
#include "utils.h"

namespace math {
	// N�mero PRIMO=> Apenas 2 divisores (ele pr�prio eo o n.1). N�o tem lei (ou f�rmula) de forma��o.
	// N�mero COMPOSTO=> Apresenta mais de dois divisores. O contr�rio do n. primo.
	// Se um n. � < 121 e n�o � divis�vel por 2, 3, 5 e 7 � de antem�o  um n. PRIMO.
	// Se um n. � < 289 e n�o � divis�vel por 2, 3, 5, 7, 11 e 13 n�o � um n. PRIMO.

	// Teste de for�a bruta: (o mais confi�vel, por�m o mais demorado.
	// Usado para testar os outros algoritmos
 	bool prime(const unsigned long long &_n);
	// Teste de for�a bruta2
	bool prime2(const unsigned long long &_n);
	// O n. � primo se as divis�es sucessivas por ns. primos resultarem resto diferente de zero
	// at� o divisor ser maior ou igual ao quociente.
	bool prime3(const unsigned long long &_n);
	// Para determinar se um certo n�mero inteiro � primo basta dividi-lo por
	// todos os primos menores ou iguais � sua raiz quadrada.
	bool prime4(const unsigned long long &_n);

	// **************<<_USAGE_>>****************
	// Function Ptr
	typedef bool (*fPtr)(const unsigned long long &);
	typedef std::vector<fPtr>  vfPtr2;

	static void test();
	static void test2();
	void primeTest();
} // math