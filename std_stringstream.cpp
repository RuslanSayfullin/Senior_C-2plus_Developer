#include <iostream>
#include <sstream>

int main() {
	int number = 42;
	std::stringstream ss;
	ss << number;
	std::string numberStr = ss.str();
	std::cout << "Number as a string: " << numberStr << std::endl;
	return 0;
}
