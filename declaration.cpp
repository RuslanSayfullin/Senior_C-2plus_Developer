#include <iostream>

// Декларация переменной
extern int x;

// Декларация функции
int add(int a, int b);

// Декларация класса
class MyClass;

int main() {
	// Использование декларированных переменнойб функции и класса
	x = 5;
	int result = add(3, 4);
	MyClass myObject;

	std::cout << "x: " << x << std::endl;
	std::cout << "Result: " << result << std::endl;

	return 0;
}
