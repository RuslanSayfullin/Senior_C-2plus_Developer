#include <iostream>
#include <tuple>
#include <string>

int add(int a, int b) {
	return a + b;
}

int main() {
	auto args = std::make_tuple(1, 2);
	int result = std::apply(add, args);
	std::cout << result << '\n';
}
