#include <iostream>
#include <functional>

int main() {
	int x = 42;
	std::reference_wrapper<int> ref_x(x);	// Создание reference_wrapper для переменной x

	ref_x.get() = 10;	// Изменение значения x через reference_wrapper
	std::cout << x << std::endl;	// Выводим "10", так как х был изменен через reference_wrapper

	return 0;
}
