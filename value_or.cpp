#include <optional>
#include <iostream>

int main() {
	std::optional<int> x =5;

	// Используем Value_or, чтобы получить значение их x или 0, усли x пустой.
	int n = value_or(x, 0);

	// n будет равно 5, т.к. в x есть значение
	std::cout << "n = " << n << std::endl; // Выведет: n = 5
	std::optional<int> y;

	// Теперь получаем значение из пустого optional
	int m = value_or(y, 10);

	// Так как y пустой, вернется по умолчанию - 10
	std::cout << "m = " << m << std::endl;	// Выведем: m = 10
}
