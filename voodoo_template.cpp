#include <iostream>

class Parent {
public:
	void doSomething() {
		std::cout << "Parent doSomething" << std::endl;
	}
};

class Child {
public:
	Child(Parent* parent) : parent_(parent) {}

	void doSomething() {
		std::cout << "Child doSomething" << std::endl;
		parent_->doSomething();	// вызываем метод родителя
	}

private:
	Parent* parent_;
};

int main() {

	Parent parent;
	Child child(&parent);

	child.doSomething();

}

/*
Результат работы программы:

Child doSomething
Parent doSomething

Сначала вызывается метод Child, который затем вызывает метод родительского обьекта Parent, с которым связан через указатель.
*/
