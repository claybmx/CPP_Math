#pragma once
#include "utils.h"
#include "mat.h"

namespace math {

	class Dizima {
	private: // defaults to private
		std::string  m_dizima;
//		Fracao *m_fracao;
		int     m_integer;
		int     m_periodo;
		int     m_intruder;
		void    parser();
		void    scan(std::string scan, std::string str);
	public:
		// Construtor padr�o:
		Dizima():m_dizima("0.0"), m_periodo(0), m_intruder(0), m_integer(0) {
			DS_("Dizima()...") /*utils::require()*/
			parser();
		} 
		Dizima(const std::string &_d): m_dizima(_d), m_periodo(0), m_intruder(0), m_integer(0) {
			DS_("Dizima(const std::string &_d)...")
			parser();
			//m_fracao = new Fracao(_d);
		}//DS_("Dizima(const int, const int)...") /*utils::require()*/ } 
		~Dizima() { DS_("~Dizima()...") }
		// Opera��es:
		// (...)
		// Streamming de sa�da:
		void /*fra��o*/geratriz(double _dizima) {
			std::cout << "dizima peri�dica: " << _dizima << std::endl;
		}
		friend std::ostream& operator<<(std::ostream& _os, const Dizima &_d) {
			_os << _d.m_dizima;
			return _os;
		}
	};
	// **************<<_USAGE_>>****************
	static void _testDizima();
	static void _dizimaUsage() {

		utils::PrintColour_("<<_DIZIMA_PERI�DICA_>>", FRI);
		// D�zima Peri�dica � um n. dec�mal onde um n. sempre est� se repetindo ap�s a v�rgula: 0,45454545
		for(int i=100; i<=000; i++) {
			float f = static_cast<float>(i);
			std::cout << static_cast<float>(f/999) << std::endl;
		}
		// Classifica��o:
		// Simples: Ex.: 1,424242... (42 = per�odo)
		// Composts: Ex.: 1,3424242... (3 n�o faz parte do per�odo)

		// Fra��o Geratriz (fra��o que gera a d�zima peri�dica
		// Ex.: 0,2222... (2 � o per�odo)
		// 2/9
		//geratriz(0.111);
		//Dizima d1;
		//P_(d1);
		Dizima d2("489.250250250");//0.25);
		P_(d2)

		//_testDizima();
	}

	static void math::_testDizima() {
		for(int i=0; i<10; i++) {
			double d = utils::_random(1, 100);
			d /=10;
			std::string str = utils::_toStr<double>(d);
			Dizima diz(str.c_str());
			P_(diz)
		}
	}

} // math