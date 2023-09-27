// <<_CRITÉRIOS DE DIVISIBILIDADE_>>
//#include "vld.h" // No memory leaks DETECTED!
#include <iostream>
#include "divisibilidade.h"
#include "testing.h"
#include "utils.h"
using namespace std;

int main(int argc, char *argv[]) {
	TAB
	utils::PrintColour_("<<_DIVISIBILIDADE_>>", BRI);
	utils::Console cmd(70, 4000, "<<_DIVISIBILIDADE_>>\n");
	utils::PrintColour("Divisibilidade Example:.\n\n"); // Defaults to blackBG | greenFG

	for(int i=0; i<0; i++) 
		P_(math::divBy2b(i))

	//P_(math::divBy2(279536))
	//P_(math::divBy3b(812472))
	//P_(math::divBy7(22389651536))
	//P_(math::divBy8(3958743328))
	//P_(math::divBy9(4901067))
	//P_(math::divBy10(4901060))
	//for(int i=0; i<10000; i++)
	//	if(math::divBy11(i))
	//		P_(i)

	math::_testDiv();

	system("pause");
	return(0);
}