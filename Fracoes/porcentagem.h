#pragma once
#include "fracao.h"
#include "defines.h"

namespace math {

	class Porcentagem {
	private:
		int    m_a, m_b;
		bool   m_propria;
		int    m_taxaPercentual;
		double m_taxaUnitaria;
		
	protected:
	public: // Porcentagem � uma RAZ�O Centesimal/Percentual especial com consequente 100.
			// Ex.: 25/100 = 0,25 = 25%. Onde:
			// 25/1000   (Raz�o centesimal/percentual)
			// 0,25 (Taxa Unit�ria / fator de multiplica��o)
			// 25%  (Taxa Percentual)
		    // Em porcentagem as grandezas s�o sempre Diretamente Proporcionais.
		Porcentagem()  { DS_("Porcentagem()...")  }
		Porcentagem(const int &A, const int &B);
		~Porcentagem() { DS_("~Porcentagem()...") }
		// Opera��es:
		friend std::ostream& operator<<(std::ostream& _os, const Fracao &_f) {
			//_os << m_a << "/" << m_b;
			//return _os;
		}
	};
	// **************<<_USAGE_>>****************
	void _porcentagem() {

	}

} // math