#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> numbers {1, 2, 3, 4, 5, 6, 7, 8};
	std::cout << "Min: " << *std::min_element(begin(numbers), end(numbers)) << std::endl;
	std::cout << "Max: " << *std::max_element(begin(numbers), end(numbers)) << std::endl;
}
