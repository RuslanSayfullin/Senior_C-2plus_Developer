#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> nums = {1, 1, 1, 1};

// Проверяем все ли элементы равны 1
if (std::all_of(nums.begin(), nums.end(), [](int i){ return i == 1; }) {
	std::cout << "Все элементы равны 1!";
}
