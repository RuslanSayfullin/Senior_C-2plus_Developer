#include <iostream>

// Шаблонный класс для вычисления факториала
template <unsigned int N>
struct Factorial {
	enum { value = N * Factorial<N - 1>::value };	// Рекурсивное умножение
};

// Специализация шаблона для базового случая
template <>
struct Factorial<0> {
	enum { value = 1 };	// Факториал 0 равен 1
};

int main() {
	std::cout << "Factorial of 5: " << Factorial<5>::value << std::endl;
	std::cout << "Factorial of 10: " << Factorial<10>::value << std::endl;

	return 0;
}
