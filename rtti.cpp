#include <iostream>
#include <typeinfo>

class Base {
public:
	virtual ~Base() {}
};

class Derived : public Base {};

int main() {
	Base *ptr = new Derived;

	if (typeid(*ptr) == typeid(Derived)) {
		std::cout << "ptr points to a Derived object." << std::endl;
	}

	delete ptr;
	return 0;
}
