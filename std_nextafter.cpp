#include <iostream>
#include <cmath>

int main() {
	double x = 0.0;
	double y = 1.0;

	std::cout << "Значение, следующее зп 0.0 в направлении 1.0: " << std::nextafter(x, y) << std::endl;
	return 0;
}
