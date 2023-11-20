#include <algorithm>
#include <iostream>

int main() {
	int a = 5;
	int b = 10;

	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

	// Использование Std::swap для обмена значениями переменных a и b
	std::swap(a, b);

	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

	return 0;
}
