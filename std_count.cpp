#include <iostream>
#include <algorithm>

int main() {
	int myints[] = {1, 2, 3, 4, 5, 1, 2, 3};

	int count = std::count(myints, myints + 8, 3);

	std::cout << "Количество элементов, равных 3: " << count << std::endl;

	return 0;
}
