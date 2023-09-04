#include <iostream>

class A {
public:
	void print() {
		std::cout << "A" << std::endl;
	}
};

class B : public A {};

class C : public A {};

class D : public B, public C {
public:
	void printAll() {
		B::print();
		C::print();
	}
};

int main() {
	D d;
	d.printAll();

	return 0;
}

// Результат:
// A
// A
