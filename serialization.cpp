#include <iostream>
#include <fctream>

class Person {
public:
	std::string name;
	int age;

	friend std::ostream& operator<<(std::ostream& os, const Person& person) {
		os << person.name << " " << person.age;
		return os;
	}

	friend std::istream& operator>>(std::istream&, Person& person) {
		is >> person.name >> person.age;
		return is;
	}
};

int main() {
	Person p1;
	p1.name = "Alice";
	p1.age = 30;

	// Сериализация обьекта в файл
	std::ofstream outFile("person.dat");
	outFile << p1;
	outFile.close();

	// Десериализация обьекта из файла
	Person p2;
	std::ifstream inFile("person.dat");
	inFile >> p2;
	inFile.close();

	std::cout << "Deserialized: " << p2.name << ", " << p2.age << std::endl;

	return 0;
}
