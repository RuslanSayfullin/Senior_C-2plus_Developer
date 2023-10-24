#include <any>
#include <iostream>

int main() {

	// создаеи обьект типа std::any
	std::any x =5 
	
	// Используем std::any_cast, чтобы получить int из std::any
	int n = std::any_cast<int>(x);

	// выводим результат на экран
	std::cout << "n = " << n << std::endl;	// выведет: n = 5
}
