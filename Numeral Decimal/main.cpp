#include <iostream>
#include "utils.h"
using namespace std;

int main() {

	utils::Console cmd;
	utils::PrintColour_("<<_N�MEROS_DECIMAIS_>>\n", BRI);
	cout << "Indica um n�mero que n�o � inteiro." << endl;
	cout << "Ex.: 5,28" << endl;
	utils::PrintColour_("Podem ser de 3 tipos:", FGI);
	utils::PrintColour_("1-Racionais: (que podem ser escritos em forma de fra��o) \n" \
		               "a/b => a,b E Z (a e b s�o pertencentes ao conjunto dos ns. inteiros \n" \
					   "b # 0 (b diferente de zero.", FGI);
	utils::PrintColour_("-Exatos: 0,8 (4/5)", FRI);
	utils::PrintColour_("-D�zimas Peri�cidas: 0,3333... (1/3)\n", FRI);
	utils::PrintColour_("2-N�meros irracionais:", FGI);
	utils::PrintColour_("-sqr(2)=1,4142..., sqr(qualquer n. primo positivo), o n. Pi = 3,14159265...", FRI);

	system("pause");
	return(0);
}