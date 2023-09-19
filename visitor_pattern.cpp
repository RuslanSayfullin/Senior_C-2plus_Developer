#include <iostream>
#include <vector>

// Интерфейс посетителя
class Visitor;

// Абстрактный класс элемента
class Element {
public:
	virtual void accept(Visitor& visitor) = 0;
};

// Конкретный элемент
class ConcreteElementA : public Element {
public:
	void accept(Visitor& visitor) override;
	void operationA() {
		std::cout << "Вызвана операция A для ConcreteElementA" << std::endl;
	}
};

// Конкретный элемент
class ConcreteElementB : public Element {
public:
	void accept(Visitor& visitor)override;
	void operationB() {
		std::cout << "Вызвана операция B для ConcreteElementB" << std::endl;
	}
};

// Интерфейс посетителя
class Visitor {
public:
	virtual void visit(ConcreteElementA& elementA) = 0;
	virtual void visit(ConcreteElementB& elementB) = 0;
};

// Конкретный посетитель
class ConcreteVisitor : public Visitor {
public:
	void visit(ConcreteElementA& ElementA) override{
		elementA.operationA();
	}

	void visit(ConcreteElementB& elementB) override {
		elementB.operationB();
	}
};

int main() {
	ConcreteElementA elementA;
	ConcreteElementB elementB;
	ConcreteVisitor visitor;

	elementA.accept(visitor);
	elementB.accept(visitor);
	return 0;
}
