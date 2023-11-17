#include <iostream>
#include <compare>

int main() {
	auto result = 42.0 <=> 42.0;

	if (result == std::partial_ordering::less) {
		std::cout << "Less than" << std::endl;
	} else if (result == std::partial_ordering::equal) {
		std::cout << "Equal to" << std::endl;
	} else if (result == std::partial_ordering::greather) {
		std::cout << "Greather than" << std::endl;
	} else {
		std::cout << "Unordered" << std::endl;
	}

	return 0;
}
