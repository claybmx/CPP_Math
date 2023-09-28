#pragma once

namespace math {

	// BI-Dimensional Matrizes: (linha, coluna):
	class Matriz {
	private: // defaults to private
		int  m_x, m_y; // linha / coluna
		int* arr;
	protected:
	public:
		// Construtor padr�o:
		Matriz();
		Matriz(const int &_x, const int &_y);
		~Matriz() { //std::cout << "~Matriz()...\n";
			delete[] arr;
		}
		// Opera��es:
		void Print();
		void fill(int _n,...);
	};
	// **************<<_USAGE_>>****************
	void _matrizUsage();

} // math