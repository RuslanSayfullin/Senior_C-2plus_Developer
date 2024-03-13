#include <iostream>

struct MyClass {
	void print() {
		std::cout << "Hello, world!" << std::endl;
	}
};

int main() {
	MyClass object;

	// Вызов функции члена
	std::invoke(&MyClass::print, &object);

	// Вызов лябда-выражения
	auto lambda = [](int x) { return x * 2; };
	std::cout << std::invoke(lambda, 5) << std::endl;

	return 0;
}
