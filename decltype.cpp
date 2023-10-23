int x = 42;
decltype(x) y;	// y будет иметь тип Int, так как x имеет тип int

double calculate() {
	// какой-то код, возвращающий значение типа double
}

decltype(calculate()) result;	// result будет иметь тип double на основе возвращаемого значения функции calculate

std::vector<int> vec;
decltype(vec.begin()) iter = vec.begin();	// iter будет иметь тип std::vctor<int>::iterator
