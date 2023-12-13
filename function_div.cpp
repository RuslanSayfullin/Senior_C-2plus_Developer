#include <iostream>
#include <cstdlib>

int main() {
	// Деление 10 на 3
	div_t result = div(10, 3);

	// Вывод результата
	std::cout << "Quotient: " << result.quot << std::endl;	// Целая часть результата
	std::cout << "Remainder: " << result.rem << std::endl;	// Остаток от деления

	return 0;
}
