//#include "vld.h" // No memory leaks DETECTED!
#include "mat.h"
using namespace std;

int main() {
	
	//clb::Console cmd(60, 30, "<<_Matem�tica B�sica_>>");
	// (1)- Todo n. composto pode ser FATORADO (separado) num produto em que s� aparecem fatores (divisores) primos, como 2, 3, 6, 7, 11, 13...etc.
	//math::fatoresPrimosUsage();
	// (2)- DIVISORES (subm�ltiplo de um n.)=> Conjunto FINITO. Retorna todos os divisores/fatores de apenas um n. espec�fico.
//	math::_divisoresUsage(); // Math/_divisores.h
	// (3)- Divisores Comuns=> Retorna todos os divisores/fatores (primos e compostos) comuns dos n. passados como args.
	//math::_fatoresComuns();
	// (4)- MDC (M�ximo Divisor Comum)=> Essa opera��o chama-se MAXIMA��O.
	math::_mdcUsage();
	// (5)- MULTIPLOS=> (Conjunto INFINITO.
	//math::_multiplosUsage();
	// (6)- MMC (M�nimo M�ltiplo Comum)=> Essa opera��o chama-se MINIMA��O.
	//math::_mmcUsage();
	// (7)- Teorema Fundamental da Aritm�tica: Assinatura digital de um dado n. (�nica p/ cada n.)
	//math::_teoremaFundamental();
	// (8)- �rvore de Fatora��o Prima
	//math::_fatorationTree();
//	_fatoracao();

	system("pause");
	return(0);
}