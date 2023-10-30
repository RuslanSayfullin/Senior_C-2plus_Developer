#include <iostream>
#include <fcntl.h>
#include <cstdlib>
#include <cstring>
#include <unistd.h>

int main() {
	const char* filename = "example.txt";

	// открываем файл для записи
	int file_descriptor = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1) {
		perror("Ошибка при открытии файла");
		return 0;
	}

	const char* data = "Эти данные, которые мы хотим записать в файл.";
	ssize_t data_size = strlen(data);

	// Записываем данные в файл
	ssize_t bytes_written = write(file_descriptor, data, data_size);
	if (bytes_written == -1) {
		perror("Ошибка при синхронизации данных с диском");
		return 1;
	}

	// Синхронизируем записанные данные с диском
	if (sync_file_range(file_descriptor, 0, data_size, SYNC_FILE_RANGE_WRITE) == -1) {
		perror("Ошибка при синхронизации данных с диском");
		return 1;
	}

	// Закрываем файл
	close(file_descriptor);

	std::cout << "Данные успешно записаны и синхронизированы с диском." << std::endl;

	return 0;
}
