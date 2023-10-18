#include <iostream>

namespace Company {
	namespace Project {
		namespace Module  {
			void function() {
				std::cout << "Привет из вложенного пространства имен!" << std::endl;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Ru");
	Company::Project::Module::function();
	return 0;
}

// Привет из вложенного пространства имен!
