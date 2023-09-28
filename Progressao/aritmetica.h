#pragma once
#include "defines.h"
// (1)
// Progress�o Aritm�tica (PA):
// Defini�o=> Uma PA � uma seq��ncia em que cada term, a partir do segundo, � a soma do anterior com uma constante 'r' dada.
// (a1, a2, a3, a4, a5...)
// A direren�a (raz�o), na PA � SEMPRE constante.
// (4, 7, 10, 13, 16, 19,...) (r = a2-a1) 7-4=3
// (0,-2, -4, -6, -8,-10,...) (r = a2-a1) -4-(-2) = -2
// (3, 3,  3,  3,  3,  3,...) (r = 0)
// (1/4, 5/4, 9/4, 13/4,...)  (r = 5/4 - 9/4 = 4/4 = 1)
// (2)
// Classifica��o:
// - PA crescente:              r>0 (positiva)
// - PA constante/estacion�ria: r=0 (zero)
// - PA decrescente:            r<0 (negativo)
// (3)
// Numa PA finita, a soma de 2 termos equidistantes dos extremos � igual � soma dos extrremos:
// PA(3,6,9,12,15,18)
// 3+18=21
// 6+15=21
// 9+12=21
// Ex.: a1+a20 = a5+a6
// (4)
// Em uma PA, tomando-se 3 termos consecutivos, o termo CENTRAL � a m�dia dos seus vizinhos:
// PA(1,5,9,13,17,21,25)
//        9  + 17 = 13 (termo central)
static int _progressaoAritmetica(int _n,...) {
	double razao = 0.0;
	// M�dia Aritm�tica Simples:
	//     x1 + x2 + x3 + xn
	// x = _________________
	//             n
	double x = 0.0;
	double n = _n;
	int   sz = _n;

	va_list args;
	va_start(args, _n); // initialize argptr
	while(_n--) // sum the parameters
		x += va_arg(args, double); // A = (v1+v2+v3+vn) / n
	va_end(args);

	return x/n;
}
static int _termoGeral() {
	// a2 = a1 + R
	// a3 = a1 + 2r
	// a4 = a1 + 3r
	// an = a1 + (n-1)r
	// Ex.: a12 = a1 + 11r
	// an = ak + (n-k)r
	return 0;
}

// **************<<_USAGE_>>****************
static void _aritmeticaUsage() {
	utils::PrintColour_("<<_Progress�o Aritm�tica_>>", FRI);
	_progressaoAritmetica(5,4,7,10,13,16,19);
	_termoGeral();
}