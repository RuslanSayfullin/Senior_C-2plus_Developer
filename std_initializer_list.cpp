#include <iostream>
#include <initializer_list>

void printValues(std::initializer_list<int> values) {
	for (const auto& value : values) {
		std::cout << value << " ";
	}
	std::cout << std::endl;
}

int main() {
	// Использование std:initializer_list при вызове функции
	printValues({1, 2, 3, 4, 5});

	// Использование std::initializer_list в конструкторе
	std::initializer_list<int> values = {10, 20, 30, 40, 50};
	printValues(values);

	return 0;
}
