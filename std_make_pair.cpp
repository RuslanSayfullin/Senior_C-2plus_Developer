#include <iostream>
#include <utility>

int main() {
	int a = 42;
	double b = 3.14;

	// Используем std::make_pair для создания обьекта std::pair
	auto myPair = std::make_pair(a, b);

	// вывод значения из объекта std::pair
	std::cout << "First element: " << myPair.first << std::endl;
	std::cout << "Second element: " << myPair.second << std::endl;

	return 0;
}
