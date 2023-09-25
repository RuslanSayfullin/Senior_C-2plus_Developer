#include <any>
#include <iostream>

int main() {

	std::any x = 5;	// x содержит int

	try {
		std::string s = std::any_cast<std::string>(x);
	} catch(const std::bad_any_cast& e) {
		std::cout << e.what() << '\n';
	}
}

// Выведет:
// bad any_cast
// Потому что пытаемся привести x к типу string,
// хотя на самом деле в нем хранится int
