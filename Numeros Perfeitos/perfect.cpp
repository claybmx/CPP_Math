#include "perfect.h"
#include "mat.h"

// Teste de for�a bruta:
bool math::perfect(const unsigned long long &_n) { // O n. 1 n�o � nem primo nem composto.
	
	vetorULLng v = math::_divisores(_n);
	//utils::_showVetor(v);
	int size = v.size()-1;
	unsigned long long n=0;
	for(int i=0; i<size; i++)
		n+=v[i];

	if(n==_n)
		return true;
	return false;
}