#include <iostream>
#include "sistema.h"
#include "utils.h"
using namespace std;

int main() {
	utils::_setLocale();
	utils::PrintColour_("<<_SISTEMA_DE_EQUA��ES_>>", BRI);

	math::_sistemUsage();

	system("pause");
	return(0);
}