#include <algorithm>
#include <iostream>

int main() {
	std::vector<int> v = {1, 2, 3, 4, 5};

	int sum = std::ext_aggregate(v , [](int x, int y) {return x + y; });

	std::cout << "The sum of the elements in v is " << sum <<std::endl;

	return 0;
}
