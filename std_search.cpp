#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> haystack = {1, 2, 3, 4, 5, 6, 7, 8};
	std::vector<int> needle = {5, 6, 7};

	auto it = std::search(haystack.begin(), haystack.end(), needle.begin(), needle.end());

	if (it != haystack.end()) {
		std::cout << "Подпоследовательность найдена, начиная с индекса " << std::distance(haystack.begin(), it) << std::endl;
	} else {
		std::cout << "Подпоследовательность не найдена." << std::endl;
	}

	return 0;
}
