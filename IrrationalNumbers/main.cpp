//#include "vld.h" // No memory leaks DETECTE!
#include "utils.h"
#include "mat.h"

int main() {

	// Ns. irracionais são números que não podem ser descritos como frações.
	// A raiz quadrada de um n. que não é um quadrado perfeito é irracional.
	utils::Console cmd;
	utils::PrintColour_("<<_IRRATIONAL_NUMBERS_>>", FRI);
	utils::PrintColour_("A raiz quadrada de um n. que não é um quadrado perfeito é irracional:\n", FGI);
	double raiz;
	for(int i=2; i<30; i++)
		if(!(math::_isRoot(2, i, raiz)))
			P_(raiz)

	system("pause");
	return(0);
}