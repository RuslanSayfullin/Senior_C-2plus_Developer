#include <iostream>

template<std::basic_fixed_string T>

class Foo {
    static constexpr char const* Name = T;
public:
    void hello() const; 
};

int main() {
    Foo<"Hello!"> foo;
    foo.hello();
}