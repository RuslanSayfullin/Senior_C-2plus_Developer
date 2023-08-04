#include <iostream>

class Test {
    public:
        Test() {
	    std::cout << "Конструктор" << std::endl;
	}
};

int main() {
    Test* t1 = new Test(); // Конструктор
    Test* t2 = (Test*)malloc(sizeof(Test));	// Конструктор не вызывается
    delete t1;	// Обьект уничтожается
    free(t2);	// Просто освобождается память
}
