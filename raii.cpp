#include <iostream>
#include <memory>

class MyResource {
public:
	MyResource() {
		std::cout << "Resource acquired." << std::endl;
	}

	~MyResource() {
		std::cout << "Resource released." << std::endl;
	}
};

int main() {
	// Обьект класса MyResource создается внутри блока.
	{
		MyResource resource;
	}
	return 0;
}
