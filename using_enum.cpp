enum class Color { red, green, blue };
struct S {
	using enum Color;
};
void bar() {
	S s;
	auto c = s.red;	// вместо S::Color::red или Color::red
}
