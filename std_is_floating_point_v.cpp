#include <iostream>
#include <type_traits>

int main() {
	// Проверяем, является ли тип float числом с плавающей запятой
	if (std::is_floating_point<float>) {
		std::cout << "float is a floating-point type." << std::endl;
	} else {
		std::cout << "float is not a ploating-point type." << std::endl;
	}

	// Проверка, является ли тип int числом с плавающей запятой
	if (std::is_floating_point_v<int>) {
		std::cout << "int is a floating-point type." << std::endl;
	} else {
		std::cout << "int is not a floating-point type." << std:: endl;
	}

	return 0;
}
