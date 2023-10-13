#include <iostream>
#include <map>

int main() {
	std::map<std::string, int> myMap;

	// Добавление элементов в отоброжение
	myMap["apple"] = 5;
	myMap["banana"] = 3;
	myMap["cherry"] = 7;

	// Попытка доступа к элементу с использованием map::at()
	try {
		int count  = myMap.at("apple");
		std::cout << "Количество яблок: " << std::cout << std::endl;
	} catch (const std::out_of_range& e) {
		std::cerr << "Ключ не найден: " << e.what() << std::endl;
	}

	return 0;
}
