#include <iostream>

// Пример обьявления пространства имен
namespace MyNamespace {
	int myFunction(int a, int b) {
		return a + b;
	}
}

int main() {
	// использование функции из пространства имен
	int result = MyNamespace::myFunction(3, 4);
	std::cout << "Result: " << result << std::endl;

	return 0;
}
