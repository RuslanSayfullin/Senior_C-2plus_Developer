#include <iostream>

// Базовый случай: функция для завершения рекурсии
int sum() {
	return 0;
}

// Вариативная функция суммирования
template <typename T, typename... Args>
T sum(T first, Args... rest) {
	return first + sum(rest...);
}

int main() {
	std::cout << sum(1, 2, 3, 4, 5) << std::endl;	// Вывод: 15
	return 0;
}
