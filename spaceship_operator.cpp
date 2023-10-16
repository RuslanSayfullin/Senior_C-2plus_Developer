#include <iostream>

struct Point {
	int x;
	int y;

	auto operator<=>(const Point& rhs) const {
		if (x == rhs.x) {
			return y <=> rhs.y;
		}
		return x <=> rhs.x;
	}
};

int main () {

	Point p1{2, 4};
	Point p2{3, 3};

	std::cout << (p1 <=> p2) << "\n";	// выведет -1, т.к. p1 меньше p2 по x

	if (p1 < p2) {
		std::cout << "p1 меньше p2\n";
	} else {
		std::cout << "p1 не меньше p2\n";
	}
}

// Здесь оператор <=> реализован для структуры Point, чтобы сравнивать точки по координатам.
