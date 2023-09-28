#include "include_all.h"
#include "constants.h"
// Per�metro=> Medida da linha de contorno de uma figura geom�trica.
namespace perimetro {

	// Per�metro de um pol�gono � a soma das medidas de seus lados:
	double polygon(int num,...) {
		double sum = 0.0;

		va_list args;
		va_start(args, num); // initialize argptr
		while(num--) {		 // sum the parameters
			double f = va_arg(args, double);
			sum += f;
		}
		va_end(args);

		return sum;
	}
	// Ret�ngulo: A = c * l (Area / comprimento / largura)
	float rectangle(const float &_comprimento, const float &_altura) {
		return ((_comprimento*2) + (_altura*2));
	}
	float square(const float &_lado) {
		return _lado*4;
	}
	// Per�metro do c�rculo=> Comprimento da circunfer�ncia (�rea de contorno arredondada)
	// C = D*Pi (Comprimento = Di�metro(2*raio) x Pi)
	float circulo(const float &_diametro) {
		return _diametro * Pi;
	}
}
// �rea=> Medida de uma superf�cie (piso, lousa, parede, etc). Medida em (m)etros
// �rea de figuras planas:

namespace area {

	// Ret�ngulo=> A = c * l (�rea / comprimento / largura)
	float rectangle(const float &Comprimento, const float &Largura) {
		float area = Comprimento * Largura;
		return area;
	}
	// Quadrado => A = l^2   (�rea / largura)
	float square(const float &Largura) {
		float area = Largura * Largura;
		return area;
	}
	// Tri�ngulo=> A = (b*h)/2 (�rea / base / altura(perpendicular � base
	float triangle(const float &Altura, const float &Base) {
		float area = (Altura * Base) / 2;
		return area;
	}
	// Trap�zio => A = ((B + b)*h)/2  (�rea / base maior / base menor / altura do trap�zio
	float trapezio(const float&BaseMaior, const float &BaseMenor, const float &Altura) {
		float area = ((BaseMaior + BaseMenor) * Altura) / 2;
		return area;
	}


}

void _calculos() {
	P_(perimetro::polygon(6, 12.5,12.5,12.5,12.5,12.5,12.5))
	P_(perimetro::rectangle(13.5f,10.8f))
	P_(perimetro::square(7))
	P_(perimetro::circulo(20))

	P_(area::rectangle(6, 4))
	P_(area::square(3.5))
	P_(area::triangle(30,24))
	P_(area::trapezio(7,4,2.6f))

}