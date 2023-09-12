#include <cstddef>
#include <iostream>

int main() {

	// Массив байт
	std::byte data[4];

	// Инициализация значениями
	data[0] = std::byte{0x01};
	data[1] = std::byte{0x02};
	data[2] = std::byte{0x03};
	data[3] = std::byte{0x04};

	// вывод значений
	std::cout << "Массив data: " << std::endl;
	for (std::byte b : data) {
		std::cout << static_cast<int>(b) << " ";
	}
	std::cout << std::endl;

	// Вывод:
	// Массив data:
	// 1 2 3 4
	
	// Битовый сдвиг влево
	data[1] <<= 4;

	std::cout << "data[1] после сдвига: " << static_cast<int>(data[1]) << std::endl;

	// Вывод;
	// data[1] после сдвига: 32
}



