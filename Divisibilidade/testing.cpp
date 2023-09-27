#include <iostream>
#include "divisibilidade.h"
#include "testing.h"
#include "mat.h"

void math::_display(const int &_div, const int &_loop, bool show) {
	utils::Console cmd;
	bool passed = true;
	int total   = 0;
	int ampulheta = 10000;
	int z = 0;

	char buf[9]={'/','-','\\','|','/','-','\\','|',0};
	//cmd.gotoxy(25,1);
	//utils::PrintColour("testin'...", FWI);
	for(int i=1; i<=_loop; i++) {
		
/*		if((ampulheta++) % 10000) {
			if(!show) {
				cmd.gotoxy(35,1);
				std::cout << (char)buf[z];
			}
			z++;
			if(z==7)
				z=0;
		}
*/	
		unsigned int n = i;//random(2, 1000000000); // (min / max)N();

		int a, b;
		switch(_div) { // just accept integer types at compile-time.
		case 2:
			a = _divBy(n,2);
			b = divBy2(n);
			break;
		case 3:
			a = _divBy(n,3);
			b = divBy3(n);
			break;
		case 4:
			a = _divBy(n,4);
			b = divBy4(n);
			break;
		case 5:
			a = _divBy(n,5);
			b = divBy5(n);
			break;
		case 6:
			a = _divBy(n,6);
			b = divBy6(n);
			break;
		case 7:
			a = _divBy(n,7);
			b = divBy7(n);
			break;
		case 8:
			a = _divBy(n,8);
			b = divBy8(n);
			break;
		case 9:
			a = _divBy(n,9);
			b = divBy9(n);
			break;
		case 10:
			a = _divBy(n,10);
			b = divBy10(n);
			break;
		case 11:
			a = _divBy(n,11);
			b = divBy11(n);
			break;
		case 12:
			a = _divBy(n,12);
			b = divBy12(n);
			break;
		case 15:
			a = _divBy(n,15);
			b = divBy15(n);
			break;
		default: std::cout << "Error!, Test type not defined yet.\n";
		}

		if(a!=b) {
			utils::PrintColour("FAILED!...", FRI);
			std::cout << n << std:: endl;
			passed = false;
			system("pause");
		} 
		if(a) total++;
		if(show && a)
			P_(n)
	}
	if(passed) {
		P(total)
		std::cout << " numeros divisiveis por " << _div << std::endl;
		utils::PrintColour("PASSED!\n", FGI);
	}
}
void math::_display2(const int &_n, const int &_loop, bool show) {
	int total = 0;

	for(int i=_n; i<=_loop; i++)
		if(_divBy(i,_n)) {
			total++;
		}
	if(total) {
		vetorInt *v = math::_multiplos(_n, 1, total);
		utils::_showVetor(*v);
		delete v;
	}
	P(total)
	std::cout << " numeros divisiveis por " << _n << std::endl;
	utils::PrintColour("PASSED!\n", FGI);
}

void math::_testDiv() {
	for(int i=2; i<=500; i++) {
		_display2(i, 1000, false);
		//utils::_sleep(5000);
	}
	//_display(15, 1000, false); 
}