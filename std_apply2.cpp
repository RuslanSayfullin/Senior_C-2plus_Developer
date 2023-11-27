#include <iostream>
#include <tuple>
#include <utility>

// Пример функции, которая принимает несколько аргументов
template <typename T, typename U>
void myFunction(T arg1, U arg2) {
	std::cout << "arg1: " << arg1 << ", arg2: " << arg2 << std::endl;
}

int main() {
	// Создаем кортеж
	std::tuple<int, double> myTuple(42, 3.14);

	// Используем std::apply для передачи элементов кортежа в функцию
	std::apply(muFunction<int, double>, myTuple);

	return 0;
}
