#include <iostream>
#include <map>

int main() {
	std::map<int, std::string> myMap;

	// Используем std::piecwise_construct lkz cjplfybz gfh rk.x-pyfxtybt
	myMap.emplace(std::piecewise_construct, std::forward_as_tuple(42), std::forward_as_tuple("Hello"));
	for (const auto& pair : myMap) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}

	return 0;
}
