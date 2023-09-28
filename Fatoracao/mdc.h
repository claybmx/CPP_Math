#pragma once
// Propriedades:
// P1- O mdc entre dois ou mais n�meros primos � sempre 1.
// P2- Se a � divisor de b, ent�o o mdc(a, b) � o pr�prio a: mdc(6, 18)=6
// P3- mdc(8, 12)=4. Se multiplicar tudo por qq valor, o resultado � o mesmo valor multiplicado:
// Ex.: mdc(2x8, 2x12)=2x4 = mdc(16, 24)=8
// P4- Rela��o entre mmc e mdc. P/ multiplicar o mmc pelo mdc basta multiplicar ambos os valores.(desde que n�o sejam primos entre si) e consequentemente tenham resultado 1.
// Ex.: mmc(4,20) x mdc(4,20)= 4x20 = 80
namespace math {

	// M�todo 1=> Decomposi��o em fatores primos:
	int mdc(const int _sz, ...);
	// m�todo 2=> Algor�tmo de Eucl�des (divis�es sucessivas):
	int mdc2(const int _sz, ...);
	// m�todo 3=> Vers�o com mmc truncado (at� todos os ns dividirem por um mesmo n. primo.)
	int mdc3(const int _sz, ...);
	// **************<<_USAGE_>>****************
	void _mdcUsage();

} // math