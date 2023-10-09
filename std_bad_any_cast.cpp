#include <iostream>
#include <any>

int main() {
	try {
		std::any value = 42;
		std::string str = std::any_cast<std::string>(value);	// Это вызовет std::bad_any_cast
	} catch (const std::bad_any_cast& e) {
		std::cerr << "Произошло исключение std::bad_any_cast: " << e.what() << std::endl;
	}

	return 0;
}
