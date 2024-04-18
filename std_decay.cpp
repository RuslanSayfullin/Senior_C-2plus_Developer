#include <iostream>

using namespace std;

template <typename T>
void print_decayed_type(T&& t) {
	cout << "Decayed type: " << typeid(decay<T>::type).name() << endl;
}

int main() {
	int i = 10;
	const int& j = i;
	int* p = &i;

	print_decayed_type(i);
	print_decayed_type(j);
	print_decayed_type(p);

	return 0;
}
