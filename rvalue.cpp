#include <iostream>
#include <utility>

int main() {

	// lvalue
	int x = 5;

	// rvalue
	int&& r = 5;

	// Перемещение ресурсов из rvalue
	// эффективнее, чем копирование
	std::cout << "x: " << x << std::endl;
	x = std::move(r);

	// r больше недействительно,
	// т.к. ресурсы были перемещены
	std::cout << "r: " << r << std::endl;

	return 0;
}
