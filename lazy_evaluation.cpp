#include <iostream>
#include <functional>

int lazyCalculation(const std::function<int()>& calculation) {
	return calculation();
}

int main() {
	int x = 5;
	int y = lazyCalculation([&x]() {
		return x * 2;
	});

	// В этот момент произойдет вычисление
	std::cout << "Result: " << y << std::endl;

	return 0;
}
