#include <iostream>

class Point {
public:
	Point(double x, double y) : x_(x), y_(y) {}

	double getX() const { return x_; }
	double getY() const { return y_; }

private:
	double x_;
	double y_;
};

int main() {
	Point p1(1.0, 2.0);
	Point p2(4.0, 6.0);

	// без лишних методов для вычисления расстояния и угла
	
	return 0;
}
