#pragma once
#include <algorithm>  // std::sort
#include <stdarg.h>   // va_list, va_start, va_arg, va_end
#include "typedefs.h"
#include "_colour.h"

namespace math {

	static unsigned long int _mmc(int _sz, ...) { REQUIRE(_sz >= 2) // STACK version (FASTER!)
		vetorUInt vi;
		unsigned int inflateA = 1;
		unsigned int inflateB = 1;
		int i = _sz+1;
		va_list args;
		va_start(args, _sz);
		while(--i)
			vi.push_back(va_arg(args, int));
		va_end(args);
		sort(vi.begin(), vi.end());
		unsigned int a = vi.at(i++) * inflateA;
		unsigned int b = vi.at(i++) * inflateB;
		while(true)
			if(a==b) {
				while((_sz--)-2) // is it the end?
					a = _mmc(2, vi.at(i++), a);
				return a;
			} else
				if(a<b)
					a = vi.at(0) * inflateA++;
				else
					b = vi.at(1) * inflateB++;
	}
	// **************<<_USAGE_>>****************
	static void _mmcUsage2() { // { _mmcUsage 1 is on the Fatoracao.h

		utils::PrintColour_("\n<<_(M)ÍNIMO_(M)ÚLTIPLO_(C)OMUM_>>\n", BRI);
		P_(_mmc(2, 90,24,32,40,100))
	}

} // math