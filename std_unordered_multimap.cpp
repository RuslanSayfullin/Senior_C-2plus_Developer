#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
	std::unordered_multimap<std::string, int> myMap;
	myMap.insert(std::make_pair("first", 1));
	myMap.insert(std::make_pair("second", 2));
	myMap.insert(std::make_pair("third", 3));
	myMap.insert(std::make_pair("fourth", 4));

	auto it = myMap.find("third");
	if (it != myMap.end()) {
		std::cout << "Values for key \"third\": ";
		for (; it != myMap.end() && it->first == "third"; ++it) {
			std::cout << it->second << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
