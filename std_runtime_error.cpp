#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
	if (b == 0) {
		throw std::runtime_error("Деление на ноль запрещено");
	}
	return a / b;
}

int main() {
	int a = 10;
	int b = 0;

	try {
		int result = divide(a, b);
		std::cout << "Результат деления: " << result << std::endl;
	} catch (const std::runtime_error& e) {
		std::cerr << "Ошибка: " << e.what() << std::endl;
	}
	return 0;
}
