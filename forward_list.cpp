#include <iostream>
#include <forward_list>

int main() {
	std::forward_list<int> list = {1, 2, 3, 4, 5};

	// Добавляем элемента в начало контейнера
	list.push_front(0);

	// Добавление элемента в конец контейнера
	list.push_back(6);

	// Удаление первого элемента контейнера
	list.pop_front();

	// Удаление последнего элемента контейнера
	list.pop_back();

	// Итерация по контейнеру
	for (std::forward_list<int>::iterator it = list.begin(); it != list.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	return 0;
}
