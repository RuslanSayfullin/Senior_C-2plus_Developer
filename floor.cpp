#include <iostream>
#include <cmath>

int main() {
	double number = 3.7;
	double result = floor(number);

	std::cout << "Исходное число: " << number << std::endl;
	std::cout << "Округленное вниз число: " << result << std::endl;

	return 0;
}
