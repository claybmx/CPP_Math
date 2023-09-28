#pragma once
#include <iostream>
#include "fracao.h"
#include "..\Utilidades\Utilidades\_colour.h"

static void _decimalsTable() {
	using namespace std;
	//std::cout << "<<_Decimals_TABLE_>>\n\n";
	utils::PrintColour_("<<_Decimals_TABLE_>>\n", BGI);
	for(int den=1; den<=10; den++) {
		for(int num=1; num<=10; num++) {
			math::Fracao f1(num, den);
			if(f1.getPropria()) {
				//cout.width(10);
				cout << f1 << " = " << f1.getDecimal() << " = " << f1.getPercentage() << "%\n";
			}
		} N
	}
}