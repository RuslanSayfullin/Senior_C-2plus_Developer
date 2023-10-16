#include <iostream>
#include <vector>

// Импорт класса вектора из std
using std::vector;

int main() {

	// Можно использовать vector, не указывая std::
	vector<int> vec;

	vec.push_back(1);

	// Импорт только нужных имен из пространства std
	using std::cout;
	using std::endl;

	cout << "Hello World!" << endl;

	return 0;
}
