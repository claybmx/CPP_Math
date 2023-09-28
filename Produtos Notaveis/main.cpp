#include <iostream>
#include "utils.h"
using namespace std;

int main() {

	utils::Console cmd;
	utils::PrintColour_("<<_PRODUTOS_NOT�VEIS_>>\n", BRI);
	// S�o multiplica��es que se destacam na matem�tica por serem frequentemente utilizadas.
	// P1- Quadrado da SOMA de dois termos: (Obs.: (a x b)^2 = (a^2 x b^2)
	cout << "(a + b)^2 = a^2 + 2ab + b^2" << endl;
	// p2- Quadrado da DIFEREN�A de dois termos:
	cout << "(a - b)^2 = a^2 - 2ab + b^2" << endl;
	// P3- Produto da soma pela diferen�a de dois termos:
	cout << "(a + b)(a - b) = a^2 - b^2" << endl;
	// Para expoentes maiores que 2 usar o Tri�ngulo de Pascal:
	//            n (expoentes)
	//     1     -0
	//   1 2 1   -1
	//  1 3 3 1  -2
	// 1 4 6 4 1 -3
	// P4- Cubo da Soma ou diferen�a de termos:
	cout << "(a + b)^3 = 1a^3b^0 3a^2b^1 3a^1b^2 1a^0b^3" << endl;
	cout << "            a^3 + 3a^2b + 3ab^2 + b^3" << endl; // No caso de soma (se for diferen�a muda o sinal para -)

	//_proporcao();

	system("pause");
	return(0);
}