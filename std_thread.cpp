#include <iostream>
#include <thread>

void foo() {
	std::cout << "Hello, world!" << std::endl;
}

int main() {
	std::thread t(&foo);

	// Ждём, пока поток завершится
	t.join();

	return 0;
}
