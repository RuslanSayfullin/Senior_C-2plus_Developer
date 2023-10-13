#include <iostream>

struct Point {
	int x;
	int y;
};

int main() {
	// Инициализация структуры Point с использованием aggregate initialization
	Point p1 = {3, 4};

	// Инициализация массива с использованием aggregate initialization
	int arr[] = {1, 2, 3, 4, 5};

	std::cout << "Point p1: (" << p1.x << ", " << p1.y << ")\n";
	std::cout << "Array elements: ";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
// Point p1: (3, 4)
// Array elements: 1 2 3 4 5
