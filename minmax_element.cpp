#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> v = {5, 2, 7, 3, 4, 9, 1};

	auto minmax = std::minmax_element(v.begin(), v.end());

	std::cout << "Min: " << *minmax.first << std::endl;
	std::cout << "Max: " << *minmax.second << std::endl;
}

// Min: 1
// Max: 9
