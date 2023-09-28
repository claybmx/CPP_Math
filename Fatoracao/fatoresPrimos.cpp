#include "fatoresPrimos.h"
#include "..\..\Utilidades\Console\console.h"
#include "..\..\Utilidades\Utilidades\_showVetor.h"

vetorULLng math::fatoresPrimos(unsigned long long _n) {
		vetorULLng v;
		unsigned long long divisor = 1;
		unsigned long long limite  = static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		while(_n>1 && divisor++<=limite)
			while(!(_n%divisor)) {
				v.push_back(divisor);
				_n /= divisor; // quociente
			}
		if(_n>1) // se _n for primo
			v.push_back(_n);
		return v;
}
// **************<<_USAGE_>>****************
void math::fatoresPrimosUsage() {
	
	utils::Console cmd;//(50, 80, "<<_FATORES_PRIMOS_>>");
	cmd.setColour(FGI);
	cmd.prtColorReturn("\n******<<_FATORES_PRIMOS_>>******", BRI);
	cmd.prtColorReturn("\nmaior n. suportado por esta função (18446744073709551615):\n", FY);
	
	vetorULLng v = fatoresPrimos(18446744073709551615);
	utils::_showVetor(v);

	v = fatoresPrimos(99999);
	utils::_showVetor(v);

	// Todo n. PRIMO é seu próprio FATOR PRIMO:
/*	for(unsigned int i=0; i<100; i++) {
		if(primo(i)) {
			vl = fatoresPrimos(i);
			showVetor(*vl);
			delete vl;
		}
	}*/
}