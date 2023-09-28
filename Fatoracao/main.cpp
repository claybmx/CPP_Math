//#include "vld.h" // No memory leaks DETECTED!
#include "mat.h"
using namespace std;

int main() {
	
	//clb::Console cmd(60, 30, "<<_Matemática Básica_>>");
	// (1)- Todo n. composto pode ser FATORADO (separado) num produto em que só aparecem fatores (divisores) primos, como 2, 3, 6, 7, 11, 13...etc.
	//math::fatoresPrimosUsage();
	// (2)- DIVISORES (submúltiplo de um n.)=> Conjunto FINITO. Retorna todos os divisores/fatores de apenas um n. específico.
//	math::_divisoresUsage(); // Math/_divisores.h
	// (3)- Divisores Comuns=> Retorna todos os divisores/fatores (primos e compostos) comuns dos n. passados como args.
	//math::_fatoresComuns();
	// (4)- MDC (Máximo Divisor Comum)=> Essa operação chama-se MAXIMAÇÃO.
	math::_mdcUsage();
	// (5)- MULTIPLOS=> (Conjunto INFINITO.
	//math::_multiplosUsage();
	// (6)- MMC (Mínimo Múltiplo Comum)=> Essa operação chama-se MINIMAÇÃO.
	//math::_mmcUsage();
	// (7)- Teorema Fundamental da Aritmética: Assinatura digital de um dado n. (única p/ cada n.)
	//math::_teoremaFundamental();
	// (8)- Árvore de Fatoração Prima
	//math::_fatorationTree();
//	_fatoracao();

	system("pause");
	return(0);
}