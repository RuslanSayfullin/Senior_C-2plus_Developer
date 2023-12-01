class Base {
public:
	virtual void show() {
		cout << "Base class" << endl;
	}
};

class Derived : public Base {
public:
	void show() override {
		cout << "Derived class" << endl;
	}
};

int main() {
	Base* ptr = new Derived;
	ptr->show();	// Вызовет show() из класса Derived
	delete ptr;
	return 0;
}
