#pragma once
#include <iostream>
#include <map>
#include "utils.h"

namespace math {

	class Statistics {
		vetorDlb m_valores;
		double m_moda;			// valor que mais aparece
		double m_media;			// 
		double m_mediana;		// O termo central, ap�s a classifica��o crescente ou decrescente.
		double m_desvioPadrao;	// Menor desvio padr�o: menor dist�ncia da m�dia. Maior desvio padr�o: maior dist�ncia da m�dia
	public:
		Statistics(int _sz, ...);
		~Statistics() { D_("~Statistics()...\n") }

		double getModa();
		double getMedia();
		double getMediana();
		double getDesvioPadrao();
		friend std::ostream& operator<<(std::ostream& _os, const Statistics &_s) {
			for(unsigned int i=0; i<_s.m_valores.size(); i++)
				_os << "<" << _s.m_valores[i] << ">";
			return _os;
		}
	};
	// **************<<_USAGE_>>****************
	void _statisticsUsage();

} // math