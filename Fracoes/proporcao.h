#pragma once
//#include "vld.h"
#include "utils.h"

namespace regraDeTres {

	// Propor��o=> Igualdade entre 2 raz�es. 1/2 = 2/4 (1 est� para 2 assim com 2 est� para 4)
	// Extremos=> O primeiro e o quarto (1 e 4) termos da propor��o.
	// Meios   => O segundo e o terceiro (2 e 2) termos da propor��o.

	// a/b = b/c => a+b / b+c

	// a/b = b/c => a+b/a = b+c/b

	// Propriedade Fundamental da Propor��o=> Verifica (atrav�s da multiplica��o cruzada) se os 4 n�meros de uma igualdade formam uma propor��o.
	bool fundamentalProperty(const math::Fracao &_f1, const math::Fracao &_f2) {
		return (_f1.getNumerador() * _f2.getDenominador()) == (_f1.getDenominador() * _f2.getNumerador());
	}
	// Regra da Propor��o=> (x / y = x2 / y2) - x est� para y assim como x2 est� para y2
	double regraDeTresD(const double &_x, const double &_y, double &_x2, const double &_y2) { // Diretamente Proporcional
		// Se x est� para y, qntos x2 v�o estar par y2. Basta multiplicar na diagonal.
		// (x/y = x2/y2) => (x*y2 = y*x2)
		_x2 = (_x*_y2)/_y;
		return _x2; // by value
	}
	double regraDeTresI(const double &_x, const double &_y, double &_x2, const double &_y2) { // Inversamente Proporcional
		// Se x est� para y, qntos x2 v�o estar par y2. Basta multiplicar na diagonal.
		// (x/y = x2/y2) => (x*y2 = y*x2)
		_x2 = (_x*_y)/_y2;
		return _x2; // return by value
	}
	// **************<<_USAGE_>>****************
	void _proporcao() {
		double x2;
		// 2 est� para 500 assim como x2 est� para 1250
		P_(regraDeTresD(2,500, x2, 1250)) // Diretamente Proporcional

		// 72km/h em 5h: (72/5), Ql a velocidade (x2) para fzer o percurso em 4hs: (x2/4)
		// Se 72 est� para 5, x2(?) est� para 4:
		P_(regraDeTresI(72,5, x2, 4)) // Inversamente Proporcional

		// Calcular di�metro da polia (> di�metro < rpm - inversamente proporcional)
		// Se 600rpm est� pra 18 dentes (600/18) qntos rmp vai estar pra 15 dentes: (x/15):
		P_(regraDeTresI(600,18, x2, 15))

		// 45 � qntos% de 1000?:
		// Se 100(%) est� para 1000, qntos % est� para x2:
		P_(regraDeTresD(100,1000, x2, 45))


		// Porcentagem:
		utils::PrintColour("45% de 1000=> ", FRI);
		P_(regraDeTresD(45,100, x2, 1000))
	
		P_(fundamentalProperty(math::Fracao(1,3), math::Fracao(2,6)))
		P_(fundamentalProperty(math::Fracao(2,3), math::Fracao(2,4)))
	}

} // regraDeTres