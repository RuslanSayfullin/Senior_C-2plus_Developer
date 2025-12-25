#include <iostream>
#include <type_traits>

template <typename T, typename = std::enable_if_t<std::is_integral_v<T>>>
void my_function(T value) {
    // This function is only enabled if T is an integral type
}

int main() {
    my_function(10);    // OK
    my_function("test");    // Error

    return 0;
}