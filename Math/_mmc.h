#pragma once
#include <algorithm>  // std::sort
#include <stdarg.h>   // va_list, va_start, va_arg, va_end
#include "typedefs.h"
#include "_colour.h"

namespace math {

	// Function to calculate the least common multiple (LCM) of two numbers
	unsigned int calculateLCM(unsigned int a, unsigned int b) {
		unsigned int num1 = a;
		unsigned int num2 = b;
		while (num1 != num2) {
			if (num1 < num2) {
				num1 += a;
			} else {
				num2 += b;
			}
		}
		return num1;
	}
// Function to calculate the least common multiple (LCM) of multiple numbers
	unsigned long int calculateMultipleLCM(int count, ...) {
		std::vector<unsigned int> numbers;
		// Fulfilling vector numbers:
		va_list args;
		va_start(args, count);
		for (int i = 0; i < count; ++i)
			numbers.push_back(va_arg(args, unsigned int));
		va_end(args);

		std::sort(numbers.begin(), numbers.end());

		unsigned int result = numbers[0];
		for (int i = 1; i < count; ++i)
			result = calculateLCM(result, numbers[i]);

		return static_cast<unsigned long int>(result);
	}
	// Using Recursion:
	static unsigned long int _MMC(int _sz, ...) { REQUIRE(_sz >= 2) // STACK version (FASTER!)
		vetorUInt numbers;
		unsigned long int num1 = 1; // Fator de Multiplicação
		unsigned long int num2 = 1;
		int count = _sz+1;
		// Fulfilling numbers:
		va_list args;
		va_start(args, _sz);
		while(--count)
			numbers.push_back(va_arg(args, unsigned long int));
		va_end(args);
		// 
		sort(numbers.begin(), numbers.end());
		unsigned long int a = numbers[count++];// * num1;
		unsigned long int b = numbers[count++];// * num2;
		while(true)
			if(a==b) {
				while((count--)-2) // is it the end?
					a = _MMC(2, numbers[count++], a);
				return a;
			} else
				if(a<b) // se a menor multiplica a
					a = numbers[0] * num1++;
				else	// se b menor multiplica b
					b = numbers[1] * num2++;
	}
	// **************<<_USAGE_>>****************
	static void _mmcUsage2() { // { _mmcUsage 1 is on the Fatoracao.h

		utils::PrintColour_("\n<<_(M)ÍNIMO_(M)ÚLTIPLO_(C)OMUM_>>\n", BRI);
		P_(_MMC(2, 90,24,32,40,100))
		P_(calculateLCM(90, 24))
	}

} // math