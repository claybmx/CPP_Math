#pragma once
#include "defines.h"
// Regime de Capitaliza��o Simples = (Juros Simples)
// Progress�o ARITM�TICA
// Ex.: Capital ($100,0 - 10%am - 4meses)
// 10/01_____ R$100,00
// 10/02_____ R$110,00 (+R$10,00)
// 10/03_____ R$120,00 (+R$10,00)
// 10/04_____ R$130,00 (+R$10,00)
// Em juro simples 1% ao m�s = 12% ao ano
// M = C + J (Montante = Capital + juros)
// A taxa e o tempo dever�o estar sob a mesma unidade tempo (dia/m�s/ano)
// F�rmula
// J = C.i.t (Juros = Capital x taxa(unit�ria/de multiplica��o) x tempo-(em meses)) 
double simplesJuros(double C, double i/*decimal*/, double t) {
	double j = C * i * t;
	return j;
}
double simplesTaxa(double j, double C, double t) {
	double i = j / (C * t);
	return i; // taxa unit�ria (ex.: 0,25) Multiplicar or 100 ara obter a taxa percentual (ex.: 25%)
}
double simplesCapital(double j, double i, double t) {
	double C = j / (i * t);
	return C;
}
double simplesTempo(double j, double C, double i) {
	double t = j / (C * i);
	return t;
}
// O M�S COMERCIAL � SEMPRE de 30 dias! 
// **************<<_USAGE_>>****************
static void _simplesUsage() {
	utils::PrintColour_("<<_Juros Simples_>>", FRI);
	std::cout << "simplesTaxa(8, 92, 1.5)=> " << simplesTaxa(8, 92, 1.5)*100 << "%\n";
	P_(simplesCapital(360, 0.02, 12))
	P_(simplesJuros(3500, 0.2, 1))
	P_(simplesTempo(50, 12000, 0.04))
}