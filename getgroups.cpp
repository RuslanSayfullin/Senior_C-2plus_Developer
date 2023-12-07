#include <unistd.h>
#include <iostream>

int main() {
	// Определение максимального количества групп пользователя
	long max_groups = sysconf(_SC_NGROUPS_MAX);

	if (max_groups < 0) {
		perror("sysconf");
		return 1;
	}

	// Выделение памяти под массив идентификаторов групп
	gid_t* groups = new gid_t[max_groups];

	// Получение списка идентификаторов групп пользователя
	int num_groups = getgroups(max_groups, groups);

	if (num_groups == -1) {
		perror("getgroups");
		delete[] groups;
		return 1;
	}

	std::cout << "User belongs to " << num_groups << " groups:" << std::endl;

	// Вывод идентификаторов групп
	for (int i = 0; i < num_groups; ++i) {
		std::cout << "Croup " << i + 1 << ": " << groups[i] << std::endl;
	}

	// Освобождение выделенной памяти
	delete[] groups;

	return 0;
}
