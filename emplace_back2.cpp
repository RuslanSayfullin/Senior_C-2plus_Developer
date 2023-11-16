#include <iostream>
#include <vector>

class MyClass {
public:
	MyClass(int a, double b) : intVar(a), doubleVar(b) {
		// Конструктор класса
	}

	void print() const {
		std::cout << "intVar: " << ", doubleVar: " << doubleVar << std::endl;
	}

private:
	int intvar;
	doubleVar;
};

int main() {
	std::vector<MyClass> myVector;

	// Использование emplace_back для добавления элемента в вектор
	myVector.emplace_back(1, 2.3);
	myVector.emplace_back(4, 5.6);

	// Вывод содержимого вектора
	for (const auto& obj : myVector) {
		obj.print();
	}

	return 0;
}
