#include <any>
#include <iostream>

int main() {
	// Создаём обьект типа std::any
	std::any x = 5;

	// спользуем std::any_cast, чтобы получить int из std::any
	int n = std::any_cast<int>(x);

	// выводим результат на экран
	std::cout << "n = " << n << std::endl;	// Выведет: n=5
}
