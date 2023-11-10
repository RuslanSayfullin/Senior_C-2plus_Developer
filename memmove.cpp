#include <iostream>
#include <cstring>

int main() {
	char str[] = "Hello, World";
	std::cout << "Before memmove" << str << std::endl;

	// переместим "World" в начало строки, перекрывая часть исходной строки
	memmove(str, str + 7,5);

	std::cout << "After memmove" << str << std::endl;

	return 0;
}
