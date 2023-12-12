#include <iostream>

class Animal {
public:
	virtual void makeSound() {
		std::cout << "Animal makes a sound" << std::endl;
	}
};

class Dog : public Animal {
public:
	void makeSound() override {
		std::cout << "Dog barks" << std::endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() override {
		std::cout << "Cat meows" << std::endl;
	}
};

int main() {
	Animal* animalPtr;

	Dog dog;
	Cat cat;

	animalPtr = &dog;
	animalPtr->makeSound();	// Вызовется метод из класса Dog
	
	animalPtr = &cat;
	animalPtr->makeSound();	// Вызовется метод из класса Cat

	return 0;
}
