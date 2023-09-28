#pragma once

namespace math {

	// M�todo 1: Decomposi��o em fatores primos:
	// Busca sequencial:
	unsigned long int mmc (int _sz, ...); // 1,636s   (1000 itera��es)
	unsigned long int mmc2(int _sz, ...); // 111,467s (1000 itera��es)
	unsigned long int mmc3(int _sz, ...); // 188,783s (1000 itera��es - random(2, 100))
	// Busca NON-Sequencial (search2):
	unsigned long int mmc4(int _sz, ...); // 100,078s (1000 itera��es)
	// Vers�o did�tica (com display)
	unsigned long int mmc5(int _sz, ...); // 0,400s   (1000 itera��es)

	template <typename T>
	static void showVetor2(T &vt) {
		for(unsigned int i=0; i<vt.size(); i++) {
			std::cout << std::setw(4) << vt.at(i);
			if(i<vt.size()-1)
				std::cout << ", ";
		}
	};
	// **************<<_USAGE_>>****************
	// Propriedade mmc/mdc:
	// MMC(a, b) * MDC(a, b) = a * b
	void _mmcUsage();

} // math