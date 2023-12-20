#include <iostream>
#include <vector>

int main() {
	std::vector<int> v(10);

	std::generate(v.begin(), v.end(), [](int i) { return i +1; });

	for (int i : v) {
		std::cout << i << " ";
	}

	std::cout << std::endl;

	return 0;
}
