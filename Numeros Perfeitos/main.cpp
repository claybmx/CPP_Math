//#include "vld.h" // No memory leaks DETECTED!
#include "perfect.h"
#include "mat.h"
using namespace std;

int main() {

	for(unsigned long long i=0/*8589869056*/; i<8589869057; i++)
		if(math::perfect(i)) {
			P_(i)
			utils::_showVetor(math::_divisores(i));
		}

	system("pause");
	return(0);
}