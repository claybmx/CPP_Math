#pragma once
#include "..\Math\_divisores.h"

namespace math {

	static int _mdc(const int _sz, ...) { REQUIRE(_sz >= 2)
		vetorUInt match;
		va_list args;
		va_start(args, _sz);
		vetorUInt A = _divisores<unsigned int>(va_arg(args, int));
		vetorUInt B;

		for(int i=0; i<_sz-1; i++) {
			B = _divisores<unsigned int>(va_arg(args, int));
			for(unsigned int a=0; a < A.size(); a++)
				for(unsigned int b=0; b < B.size(); b++)
					if(A[a]==B[b])
						match.push_back(A[a]);
			A = match;
		}
		va_end(args);
		return match[match.size()-1];
	}
	// **************<<_USAGE_>>****************
	static void _mdcUsage2() {

		utils::PrintColour_("\n<<_(M)ÁXIMO_(D)IVISOR_(C)OMUM_>>\n", BRI);
		P_(_mdc(2, 168, 56, 175, 49))
		P_(_mdc(2, 20, 40))

	}

} // math