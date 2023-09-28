#pragma once
#include <iostream>
#include "..\Fracoes\fracao.h"
#include "defines.h"

namespace math {
	// Probabilidade=> � o c�lculo da chance de um determinado evento ocorrer. Foco de estudo: Experimentos aleat�rios. (contr�rio de experimentos determin�sticos. Ex.: determinar o tempo de queda de um objeto)
	// Experimento aleat�rio=> Depende do acaso. O resultado � imprevis�vel.
	// Ex.: lan�amento de dados/moedas/cartas, etc.
	// Espaco amostral=> Conjunto de todos os resultados poss�veis (representado pela letra grega �mega). Tem de ser
	// equimostr�vel (todos os elementos tem a mesma chance de ocorrer)
	// 0 <= P <= 1 Sempre na faixa entre 0 e 1 (ou 0% - 100%)

	class Probabilidade {
		Fracao m_f;    
		double m_Pe;     // Probabilidade
		double m_events; // n. elementos do EVENTO / CASOS FAVOR�VEIS (n(e))
		double m_omega;  // n. de elementos do ESPA�O AMOSTRAL / N. TOTAL (n(o)) (usar an�lise combinat�ria para calcular)
		
	public:
		Probabilidade(const double &_e, const double &_o):m_Pe(0), m_events(_e), m_omega(_o) { start(); }
		~Probabilidade() {}
		inline void start() {
			// Probabilidade � o n. de casos FAVOR�VEIS (n(e)) dividido pelo n. de TOTAL eventos do ESPA�O AMOSTRAL (n(o)):
			m_Pe = m_events / m_omega;
		}
		friend std::ostream& operator<<(std::ostream& _os, const Probabilidade &_p) {
			_os << _p.m_Pe;
			return _os;
		}
	};

	static void _probabilidade() {
		std::cout << "_probabilidade()...\n";
	}
	// **************<<_USAGE_>>****************
	static void _probabilidadeUsage() {
		// probabilidade de um dado cair num n. primo
		// Espa�ao amostral = 6 - �mega (Um dado tem 6 faces logo o total de possibilidades � 6)
		// n. de eventos = {2, 3 e 5} 3 ns. primos,logo n(e)=3
		Probabilidade p(3,6);
		P_(p)
		// Problema 2:
		// Jogamos 2 dados comuns e somamos. Ql a probabilidade de sair a soma 8?
		// Espa�o amostral => 6 possibilidades combinat�rias do dado1 e 6 do dado2. 6 e 6 = 6 x 6= 36      n(o)=36 �mega
		// n. de eventos   => 5 combina��es poss�veis p/ a somat�ria 8 {(3,5), (5,3), (2,6), (6,2), (4,4)} n(e)=5
		Probabilidade p2(5,36);
		P_(p2)		
		//_probabilidade();
	}
} // math