template<typename T>
T max(T a, T b) {
	return a >b ? a : b;
}

int result = max<int>(5, 3); // result будет равен 5

double result = max<double>(5.5, 3.3); // result будет равен 5.5
