#pragma once
#include "defines.h"
// Porcentagem em C�rculo:
// 50% de 2 = 1
// Na porcentagem em c�rculo, o resultado est� em cima, a porcentagem est� embaixo � esquerda e o n. valor est� embaixo � direita:
// 0.5*2   = 1   => Embaixo esquerda / embaixo direita / em cima
// 1 / 2   = 0.5 => 
// 1 / 0.5 = 2   => 

// 50% de 2 � quanto?

namespace porcentagem {

	static float _resultado(const float &_percentual, const float &_valor) {
		// Ex.:  Taxa percentual(30%)  -  Taxa unit�ria(0,3)
		float _unitaria = _percentual / 100;
		return _unitaria * _valor;
	}
	// 1 � quantos por cento de 2?
	static float _percentual(const float &_resultado, const float &_valor) { 
		return (_resultado / _valor) * 100;
	}
	// 1 � 50% de quanto?
	static float _valor(const float &_resultado, const float &_percentual) { 
		return _resultado / (_percentual / 100);
	}
	// ***************<<_USAGE_>>****************
	void _porcentagemCircular() {
		P_(_resultado(50, 2))
		P_(_percentual(1, 2))
		P_(_valor(1, 50))
	}

} // porcentagem