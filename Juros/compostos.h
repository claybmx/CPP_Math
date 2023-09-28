#pragma once
#include <math.h> // pow
#include "defines.h"

// Regime de Capitalização Composta - (Juros Compostos)
// Progressão GEOMÉTRICA
// Ex.: Capital ($100,0 - 10%am - 4meses)
// 10/01_____ R$100,00
// 10/02_____ R$110,00 (+R$10,00 - x 1,1)
// 10/03_____ R$121,00 (+R$11,00 - x 1,1)
// 10/04_____ R$133,10 (+R$12,10 - x 1,1)
// Fórmula:
// M = C(1 + i)^t => Montante = Capital(1 + taxa)^tempo *******A taxa e o tempo sempre CONCORDAM!********
static double _compostosJuros(double C, double i, double t) {
	double M = C * pow((1 + i), t);
	return M;
}
// Fórmula para obter o tempo:
// t = j / (C * i)
// Formula para obter a taxa de juros:
// i = j / (C * t)
// **************<<_USAGE_>>****************
static void _compostosUsage() {
	utils::PrintColour_("<<_Juros Compostos_>>", FRI);
	P_(_compostosJuros(100, 0.1, 4))
}