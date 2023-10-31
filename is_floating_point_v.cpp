#include <concepts>
#include <iostream>

template<typename T>
void processValue(T value) {
	if constexpr (std::is_floating_point <T>) {
		// Обработка значения как числа с плавающей точкой
		std::cout << "Передано значение с плавающей точкой: " << value << '\n';
	} else {
		// Обработка целочисленного значения
		std::cout << "Передано целочисленное значение: " << value << '\n';
	}
}

int main() {
	prcessvalue(1.5f);	// Выведет: Передано значение с плавающей точкой: 1.5
	processvalue(10);	// Выведет: Передано целочисленное значение: 10
}
