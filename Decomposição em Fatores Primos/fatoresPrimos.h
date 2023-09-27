#pragma once
#include <string>
#include "utils.h"

namespace math {
	// Decomposi��o em FATORES PRIMOS:
	// Todo n. composto pode ser escrito num produto em que s� aparecem fatores primos, como 2, 3, 6, 7, 11, 13...etc.
	static vetorULLng fatoresPrimos(unsigned long long _n) { // _n = dividendo
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
	// Vers�o com ponteiros:
	static vetorULLng *fatoresPrimosP(unsigned long long _n) { // _n = dividendo
		vetorULLng *v = new vetorULLng();
		unsigned long long divisor = 1;
		unsigned long long limite  = static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		while(_n>1 && divisor++<=limite)
			while(!(_n%divisor)) {
				v->push_back(divisor);
				_n /= divisor; // quociente
			}
		if(_n>1) // se _n for primo
			v->push_back(_n);
		return v;
	}
	// Vers�o Did�tica:
	static vetorULLng fatoresPrimosD(unsigned long long _n, bool _show=true) {
		using namespace std;
		int len = strlen(utils::_toStr(_n).c_str());
		vetorULLng v;

		unsigned long long divisor = 1;//2;
		unsigned long long limite  = static_cast<unsigned long long>(sqrt(static_cast<double>(_n)));
		while(_n>1 && divisor++<=limite) {
			while(!(_n%divisor)) {
				if(_show)
					cout << setw(len) << _n << " | " << divisor << endl;

				v.push_back(divisor);
				_n /= divisor; // quociente
			}
		}
		if(_n>1) // se _n for primo
			v.push_back(_n);

		if(_show && v.size()>0) {
			if(_n!=1)
				cout << setw(len) << _n << " | " << _n << endl;
			for(int i=0; i<len+2; i++)
				cout << " ";
			for(int i=0; i<len*1.5; i++)
				cout << "_";
			N
			cout << setw(len) << _n/_n << " | ";
			for(unsigned int i=0; i<v.size()-1; i++)
				cout << v[i] << ".";
			cout << v[v.size()-1] << endl;
		}
		return v;
	}
	// **************<<_USAGE_>>****************
	void testFatoresPrimos();
	bool show = false;
	static void fatoresPrimosUsage() {

		//show = true;
		//testFatoresPrimos();

		utils::Console cmd(50, 80, "<<_FATORES_PRIMOS_>>");
		cmd.setBufferSize(55, 10000);
		cmd.setColour(FGI);
		cmd.prtColorReturn("\n******<<_FATORES_PRIMOS_>>******\n", FRI);
		// 
		cmd.prtColorReturn("\nMaior n. fator�vel por este algoritmo:\n", FY);
		vetorULLng v1 = fatoresPrimosD(18446744073709551615);//, false);
		//utils::_showVetor(v1);
		cmd.prtColorReturn("\nMaior n. primo test�vel por este algoritmo:\n", FY);
		vetorULLng v2 = fatoresPrimosD(18446744073709551557);

		cmd.prtColorReturn("\nTeste fator primo n. 108:\n", FY);
		vetorULLng v3 = fatoresPrimosD(4294967295);
		//utils::_showVetor(v1);
	}

	void testFatoresPrimos() {
		utils::Console cmd;
		for(unsigned long long i=10; i<10000000000000000000; i*=10) {
		//for(unsigned long long i=1; i<=200; i++) {
			cmd.cls();
			unsigned long long n1, n2 = 1;
			n1 = utils::_random64(i/10, i, true);
			//n = utils::_random64(1000000000000000000, 10000000000000000000);
			vetorULLng v = fatoresPrimos(n1);
			for(unsigned int i2=0; i2<v.size(); i2++)
				n2 *= v[i2];

			TAB cmd.setColour(FWI);
			//P_(i)
			if(show) {
				utils::PrintColour_(utils::_toStr(n1).c_str(), FYI);
				utils::_showVetor(v);
				//clb::PrintColour_(utils::_toStr(n2).c_str(), FYI);
			}
			if(n1==n2)
				utils::PrintColour_("PASSED!\n", FGI);
			else {
				utils::PrintColour_("FAILED!\n", FRI);
				system("pause");
				break;
			}
			v.clear();
			utils::_sleep(3000);
		}
	}

} // math