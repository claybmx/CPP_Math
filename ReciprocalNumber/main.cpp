#include "include_all.h"
using namespace std;

int main () {
	//Console cmd(50, 10, "<<_RECIPROCAL_NUMBERS_>>");
	float val = 1;

	// REC�PROCO DE UM N�MERO=> 2 n�meros s�o rec�procos se o seu produto � igual a 1.
	// Tamb�m chamado inverso.
	cout << "         1/2   = 0,5 \n";
	cout << "         1/0,5 = 2   \n\n";
	utils::PrintColour_("C�lculo do inverso: ", FWI);
	while(val) {
		utils::PrintColour("Type an integer number (0=quit): ", FWI);
		cin >> val;
		if(val)
			utils::PrintColour("O inverso �: ", FWI); cout << (1/val) << endl;
	}

	system("pause");
	return(0);
}
