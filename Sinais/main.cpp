#include "include_all.h"
#include "signs.h"
using namespace std;
using namespace math;

int main() {

	utils::PrintColour_("<_REGRA_DOS_SINAIS_>>", BRI);
	// (Adi��o / Subtra��o)=> Sinais iguais soma e REPETE o sinal.
							//Sinais diferentes subtrai e coloca o SINAL DO MAIOR.
	P_(soma(+2, +3))
	P_(soma(-2, -3))
	P_(soma(+2, -3))
	P_(soma(-2, +3))
	P_(subtrai(+2, +3))
	P_(subtrai(-2, -3))
	P_(subtrai(+3, +2))
	P_(subtrai(-3, -2))

	// (Multiplica��o / Divis�o)=> Sinais iguais multiplica/divide e repete e coloca o SINAL DE MAIS
								// Sinais diferentes multiplica/divide e coloca o SINAL DE MENOS.
	// Produto de mais de 2 n�meros com sinais:
			// (+)(+)(+)(-)(-)(-)(-) = (+) -> n. PAR   de fatores negatIvos resultado POSITIVO.
			// (+)(+)(+)(-)(-)(-)    = (-) -> n. �MPAR de fatores negatIvos resultado NEGATIVO.

	system("pause");
	return(0);
}