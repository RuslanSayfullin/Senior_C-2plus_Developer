#include <iostream>
#include <string>

int main() {
	std::string myString = "Hello, World!";

	// Используем at() для доступа к символу по индексу
	char character = myString.at(7);

	std::cout << "Character at position 7: " << character << std::endl;

	return 0;
}
