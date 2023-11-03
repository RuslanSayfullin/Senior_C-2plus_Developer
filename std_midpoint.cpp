#include <iostream>
#include <cmath>

int main() {
	double a = 3.0;
	double b = 7.0;
	double result = std::midpoint(a, b);

	std::cout << "Midpoint between " << a << " and " << b << " is " << result << std::endl;

	return 0;
}
