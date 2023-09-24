#include <iostream>

class MyClass {
private:
	int x;
public:
	MyClass(int val) : x(val) {}
	friend void showValue(const MyClass& obj);
};

// Дружественная функция, имеющая доступ к закрытому члену класса
void showValue(const MyClass& obj) {
	std::cout << "Значение x: " << obj.x << std::endl;
}

int main() {
	MyClass obj(42);
	showValue(obj); // Можем вызвать дружественную функцию
	return 0;
}
