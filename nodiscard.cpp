#include <iostream>

[[nodiscard]] int square(int x) {
	return x * x;
}

int main() {
	square(5);	// Предупреждение компилятора, если результат не используется
	return 0;
}
