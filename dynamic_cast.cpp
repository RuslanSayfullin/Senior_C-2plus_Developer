#include <iostream>

class Base {
public:
	virtual void print() {
		std::cout << "Base" << std::endl;
	}
};

class Derived : public Base {
public:
	void print() override {
		std::cout << "Derived" << std::endl;
	}
};

int main() {
	Base* basePtr = new Derived;

	Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

	if (derivedPtr) {
		derivedPtr->print();	// Выведет "Derived"
	} else {
		std::cout << "Conversion failed." << std::endl;
	}

	delete basePtr;
	return 0;
}
