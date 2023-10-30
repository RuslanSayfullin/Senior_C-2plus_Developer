#include <iostream>
#include <fstream>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

int main() {
	MyData data;
	data.value = 42;
	data.text = "Hello, Boost.Serialization!";

	// Сериализация обьекта в файл
	std::ofstream ofs("data.txt");
	boost::archive::text_oarchive oa(ofs);
	oa << data;
	ofs.close();

	// Десериализация обьекта из файла
	MyData loaded_data;
	std::ifstream ifs("data.txt");
	boost::archive::text_iarchive ia(ifs);
	ia >> loaded_data;
	ifs.close();

	std::cout << "Loaded data: " << loaded_data.value << ", " << loaded_data.text << std::endl;

	return 0;
}
