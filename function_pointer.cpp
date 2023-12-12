#include <iostream>

// Пример функции
int add(int a, int b) {
	return a + b;
}

int main() {
	// Обьявление указателя на функцию с сигнатурой ште(штеб ште)
	int (*functionPtr)(int, int);

	// Присваивание указателя адреса функции
	functionPtr = add;

	// Вызов функции через указатель
	int result = functionPtr(5, 3);

	std::cout << "Результат: " << result << std::endl;

	return 0;
}
