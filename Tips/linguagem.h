#pragma once
#include "..\..\Utilidades\Utilidades\_setLocale.h"
#include "defines.h"

namespace math {

	static void linguagem() {

		utils::_setLocale();
		utils::PrintColour_("<<_INTERPRETA��O_DE_TEXTOS_EM_RESOLU��O_DE_PROBLEMAS_>>", FRI);
		utils::PrintColour_("de, da, do --> multiplica��o\n" \
			"por -->divis�o\n" \
			"equivale, ser�, �, tem...--> igualdade\n" \
			"referente a um n�mero desconhecido (x) --> dobro (2x), triplo (3x), metade (x/2), ter�a parte(x/3)...\n" \
			"A soma de x e y      --> (x + y)\n" \
			"A diferen�a de a e b --> (a - b)\n" \
			"O produto de x e y   --> (x . y) ou (xy)\n" \
			"O quociente entre m e n --> (m:n)\n" \
			"x � 10 unidades maior que y --> x = y + 10\n" \
			"a �  5 unidades maior que b --> a = b - 5\n" \
			"c �  8 unidades menor que d --> c = d - 8\n" \
			"x excede a y em 6      --> x = y + 6\n" \
			"2 n�meros consecutivos --> x, x+1\n" \
			"3 n�meros consecutivos --> x, x+1, x+2\n" \
			"um n�mero par   --> 2x\n" \
			"um n�mero �mpar --> (2x - 1) ou (2x + 1)\n" \
			"2 n�meros pares consecutivos   --> 2x, 2x+2\n" \
			"2 n�meros �mpares consecutivos --> 2x-1, 2x-1+2 ou 2x+1\n" \
			"O oposto  de x (na adi��o)      --> x = -x\n" \
			"O inverso de x (na multiplica��o) --> x = 1/x\n", FY);
	}
} // math