 #pragma once

namespace math {
	// Divisibilidade: Divis�o exata de um n. por outro.
	// Qndo um n. � divis�vel por outro ele tb � multiplo do outro.
	// Para obter o conjunto dos m�ltiplos de um n. multiplicar este n. pelos elementos do conjunto dos n�meros naturais. (zero em diante)

	// Divisibilidade por 2=> Qualquer n. par (terminado em 0, 2, 4, 6 e 8)
	bool divBy2(const unsigned long &_n);
	bool divBy2b(const unsigned long &_n);
	// Divisibilidade por 3=> A soma dos 'valores absolutos' (raiz digital) de seus algarismos � divis�vel por 3;
	bool divBy3(const unsigned long &_n);
	bool divBy3b(const unsigned long &_n);
	// Divisibilidade por 4=> Qndo os 2 �ltimos digitos do n. forem divis�veis por 4:
	bool divBy4(const unsigned long &_n);
	// Divisibilidade por 5=> Qualquer n. terminado em 0 ou 5.
	bool divBy5(const unsigned long &_n);
	bool divBy5b(const unsigned long &_n);	
	// Divisibilidade por 6=> Qualquer n. divis�vel por 2 && 3:
	bool divBy6(const unsigned long &_n);
	// Divisibilidade por 7=> 22 389 651 536     (Dividir cada grupo de 3 por 7)
	//                        \/ \/  \/  \/      (Somar o resultado)
	//						  +1 -4  +0  -4 = -7 (Resultdo divis�vel por 7!)
	bool divBy7(const unsigned long long &_n);
	// Divisibilidade por 8=> Qndo a som dos 3 �ltimos digitos do n. forem divis�veis por 8.
	bool divBy8(const unsigned long &_n);
	// Divisibilidade por 9=> Raiz digital = 9
	bool divBy9(const unsigned long &_n);
	bool divBy9b(const unsigned long &_n);
	// Divisibilidade por 10=> Qualquer n. terminado no digito 0 (n>0).
	bool divBy10(const unsigned long &_n);
	// Divisibilidade por 11=> Qndo a diferen�a alternada (pares - �mpares) for divis�vel por 11.
	bool divBy11(const unsigned long &_n);
	// Divisibilidade por 12=> Qndo o n. for divis�vel por 3 && 4 (j� que 3x4=12)
	bool divBy12(const unsigned long &_n);
	// Divisibilidade por 15=> 3x5=15 (e assim sucessivamente com outros ns.
	bool divBy15(const unsigned long &_n);

} // math