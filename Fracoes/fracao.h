#pragma once
#include "utils.h"

namespace math {
	// Tipos de FRA��ES:
	// Pr�pria   => Numerador < denominador
	// Impr�pria => Numerador > denominador
	// Aparente  => � uma fra��o impr�pria com divis�o exata: 4/2 = 2
	// Fra��o Equivalente: Representam a mesma parte do todo. 1/2 e 2/4 = 0,5
	// Fra��o Decimal:     S�o fra��es onde os denominadores s�o pot�ncias de 10. "Ex.: 5/10 (cinco d�cimos)."

	// Inverso Multiplicativo=> Qndo vc inverte uma fra��o: 1/2=0.5 e 1/0.5=2
	// Simplifica��o / redu��o=> uma fra��o a/b � irredud�vel qndo o mdc(a, b)=1. (Ou seja qno o numerador e o denominador s�o primos entre si)
	class Fracao {
	private:
		int    m_numerador, m_denominador;
		int    m_integer; // if impropria
		double m_periodic;
		double m_decimal;
		bool   m_propria;
		void setDecimal(bool Periodic=false);
	protected:
	public:
		// Construtor padr�o:
		Fracao():m_numerador(0), m_denominador(1), m_propria(true), m_integer(0), m_decimal(0.0) { DS_("Fra�ao()...") }
		Fracao(const double &Decimal);
		Fracao(const int &Numerador, const int &Denominador);
		Fracao(const int &Integer,   const int &Numerador, const int &Denominador);
		~Fracao() { DS_("~Fra�ao()...") }
		void setFracao(const int &Numerador, const int &Denominador);
		// Opera��es:
		void divisao();
		void multiplica();
		void soma(const Fracao &Right);
		void subtracao(const Fracao &Right);
		void power(const int &Expoente);
		inline void setPeriodic(bool _p=true) {
			setDecimal(_p);
		}
		
		Fracao equivalente(const int &Multiplicador);
		bool simplify();  // Simplifica��o / Redu��o=> Qndo o MDC(num, den)=1
		bool simplify2(); // Vers�o did�tica
		bool setMisto();  // Converts an improper fraction to a mist number.
		bool impropria(); // Converts a mist number to an improper fraction.
		inline bool  getPropria()     { return m_propria;  }
		inline int   getInteger()     { return m_integer;  }
		inline double getDecimal()    { return m_decimal;  }
		inline double getPeriodic()   { return m_periodic; }
		inline double getPercentage() { return m_decimal*100; }
		inline int getNumerador() const { return m_numerador; }
		inline int getDenominador() const { return m_denominador; }
		// Raz�o Centesimal / percentual:
		inline void setRazaoPercentual() {
			double d = m_decimal*100;
			P_(d)
			Fracao f(2.5);
			P_(f)
		}
		// **********<__SOBRECARGA DE OPERADORES_>>**********
		Fracao& operator=(const Fracao &_right);
		const Fracao operator+(const Fracao &_right);
		const Fracao operator-(const Fracao &_right);
		const Fracao operator*(const Fracao &_right);
		const Fracao operator/(const Fracao &_right);
		bool operator==(const Fracao &_right);
		bool operator>(const Fracao &_right);
		bool operator<(const Fracao &_right);
		friend std::ostream& operator<<(std::ostream& _os, const Fracao &_f);
	};
	// **************<<_USAGE_>>****************
	void _fracaoUsage();

} // math