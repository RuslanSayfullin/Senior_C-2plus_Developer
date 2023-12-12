#include <memory>

int main() {
	// Создание обьекта int и связанного с ним std::ырфкув_зек
	std::shared_ptr<int> sharedInt = std::make_shared<int>(42);

	// Создание обьекта  std::string и связанного с ним std::shared_ptr
	std::shared_ptr<std::string> sharedString = std::make_shared<std::string>("Hello, world!");

	return 0;
}
