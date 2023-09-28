//#include "vld.h" // No memory leaks DETECTED!
#include "utils.h"
#include "mat.h"
using namespace std;

int main() {

	utils::Console cmd;//(80, 30, "<<_MATH LIBRARY_>>");
	cmd.setColour(FGI);

	//math::_absUsage();
	//math::_divByUsage();
	//math::_divisoresUsage();
	//math::_fatoresPrimosUsage();
	//math::_mdcUsage2();
	//math::_mmcUsage2();
	//math::_multiplosUsage();
	//math::_raizDigitalUsage();
	//math::_primeUsage();
	//math::_rootUsage();
	math::_fatorialUsage();

	system("pause");
	return(0);
}