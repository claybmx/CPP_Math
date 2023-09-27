#include "divisibilidade.h"
#include "..\Math\_raizDigital.h"
#include "..\Math\_divBy.h"
#include "..\Math\_abs.h"
#include "..\..\Utilidades\Utilidades\_conversions.h"
#include "..\..\Utilidades\Utilidades\_require.h"

// Divisibilidade por 2=> Qualquer n. par
bool math::divBy2(const unsigned long &_n) { utils::require(_n>0);
	int i = _n%10; // Primeiro digito à direita do n.
	if(i==0 || i==2 || i==4 || i==6 || i==8)
		return true;
	return false;
}
bool math::divBy2b(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<long>(_n); 
	int index = str.length();
	int i = str[index-1]-48;
	if(i==0 || i==2 || i==4 || i==6 || i==8)
		return true;
	return false;
}
// Divisibilidade por 3=> Raiz digital divisível por 3, 6 e 9;
bool math::divBy3(const unsigned long &_n) { utils::require(_n>0);
	int i = _raizDigital(_n);
	if(i==3 || i==6 || i==9) 
		return true;
	return false;
}
bool math::divBy3b(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<long>(_n); 
	int soma = 0;
	for(unsigned int i=0; i < str.length(); i++)
		soma += str[i]-48;
	if(!(soma%3))
		return true;
	return false;
}
// Divisibilidade por 4=> Qndo os dois últimos digitos do n. forem divisíveis por 4:
bool math::divBy4(const unsigned long &_n) { utils::require(_n>0);
	int dig = _n%100; // Os 2 primeiros digitos à direita do n.
	for(int i=100; i>=0; i-=4)
		if(dig==i)
			return true;
	return false;
}
// Divisibilidade por 5=> Qualquer n. terminado em 0 ou 5.
bool math::divBy5(const unsigned long &_n) { utils::require(_n>0);
	int i = _n%10; // Primeiro digito à direita do n.
	if(i==0 || i==5)
		return true;
	return false;
}
bool math::divBy5b(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<long>(_n); 
	int index = str.length();
	int i = str[index-1]-48;
	if(i==0 || i==5)
		return true;
	return false;
}
// Divisibilidade por 6=> Qualquer n. divisível por 2 && 3:
bool math::divBy6(const unsigned long &_n) { utils::require(_n>0);
	if(_divBy(_n,2) && _divBy(_n,3))
		return true;
	return false;
}
// Divisibilidade por 7=>
bool math::divBy7(const unsigned long long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<unsigned long long>(_n); 
	int sz = str.length();
	int cnt=0;
	int resto = sz%3;
	std::string str2;
	str2.append(str,0,resto);
	str2+='.';
	for(int i=resto; i<sz; i++) {
		char c = str.at(i);
		str2+=c;
		if(++cnt==3) {
			cnt=0;
			str2+='.';
		}
	}
	utils::Tokenizer token(str2,".");
	int soma=0;
	for(int i=0; i<token.get_size(); i++) {
		int d = utils::_strTo<int>(token.get_at(i).c_str());
		if(i%2) // par
			d*=-1;
		soma+=d%7;
	}
	if(!(soma%7))
		return true;
	return false;
}
// Divisibilidade por 8=> Qndo os 3 últimos digitos do n. forem divisíveis por 8.
bool math::divBy8(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<unsigned long long>(_n); 
	int sz = str.length();
	//P_(sz)
	//P_(str)
	int cnt=0;
	int resto = sz%3;
	//P_(resto)
	std::string str2;
	str2.append(str,0,resto);
	str2+='.';
	for(int i=resto; i<sz; i++) {
		char c = str.at(i);
		//P_(c)
		str2+=c;
		if(++cnt==3) {
			cnt=0;
			str2+='.';
		}
	}
	utils::Tokenizer token(str2,".");
	//P_(token.get_size())
	int d = utils::_strTo<int>(token.get_at(token.get_size()-1).c_str());
	//P_(d)
	if(!(d%8))
		return true;
	//P_(str2)
	//P_(_n)
	return false;
}
// Divisibilidade por 9=> Raiz digital divisível por 9
bool math::divBy9(const unsigned long &_n) { utils::require(_n>0);
	int i = _raizDigital(_n);
	if(i==9)
		return true;
	return false;
}
bool math::divBy9b(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<long>(_n); 
	int soma = 0;
	bool out = false;
	for(unsigned int i=0; i < str.length(); i++)
		soma += str[i]-48;
	if(soma >=10) // recursive call
		/*return */out = divBy9b(soma);
	if(!(soma%9))
		return true;
	return out;
}
// Divisibilidade por 10=> Qualquer n. terminado no digito 0 (n>0).
bool math::divBy10(const unsigned long &_n) { utils::require(_n>0);
	int i = _n%10; // Primeiro digito à direita do n.
	if(i==0)
		return true;
	return false;
}
// Divisibilidade por 11=> 
bool math::divBy11(const unsigned long &_n) { utils::require(_n>0);
	std::string str = utils::_toStr<unsigned long long>(_n); 
	int sz = str.length();
	//P_(sz)
	//P_(str)
	int pares=0;
	int impares=0;
	for(int i=0; i<sz; i++) {
		int d = str[i]-48;
		//P_(d)
		if(i%2)
			impares+=d;
		else // pares
			pares+=d;
	}
	//P_(pares)
	//P_(impares)
	int soma = math::_abs(pares-impares);
	//P_(soma)
	if(!(soma%11))
		return true;
	return false;
}
// Divisibilidade por 12=> Qndo o n. for divisível por 3 && 4 (já que 3x4=12)
bool math::divBy12(const unsigned long &_n) { utils::require(_n>0);
	if(_divBy(_n,3) && _divBy(_n,4))
		return true;
	return false;
}
// Divisibilidade por 15=> 3x5=15 (e assim sucessivamente com outros ns.
bool math::divBy15(const unsigned long &_n) { utils::require(_n>0);
	if(_divBy(_n,3) && _divBy(_n,5))
		return true;
	return false;
}


