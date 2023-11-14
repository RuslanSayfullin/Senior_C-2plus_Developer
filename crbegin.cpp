#include <iostream>
#include <vector>

int main() {
	std::vector<int> numbers = {1, 2, 3, 4, 5};

	// Использует crbegin() для константного обратного итератора
	for (auto it = numbers.crbegin(); it != numbers.crend(); ++it) {
		std::cout << *it << " ";
	}

	return 0;
}
