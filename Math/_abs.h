#pragma once
#include "_colour.h"
#include "defines.h"

namespace math {
	// Módulo ou valor ABSoluto de um número:
	static signed long _abs(const signed long &_n) {
		//signed long absolute = _n;
		if(_n<0)
			return _n*(-1);//_absolute *= 
		return _n;
	}
	// Didatic version:
	static signed long _absD(const signed long &_n) {
		signed long abs=_n;
		if(_n<0)
			abs *= -1;//_absolute *= 
	
		std::cout << "|" << abs << "|" << std::endl;
		return abs;
	}
	// **************<<_USAGE_>>****************
	static void _absUsage() {
		// Valor (ABS)oluto:
		utils::PrintColour_("<<_ABS_>>", BRI);
		P_(abs(-2))
		P_(abs(-1))
		P_(abs(0))
		P_(abs(1))
		P_(abs(2))
		_absD(2);
		_absD(-2);
	}

} // math