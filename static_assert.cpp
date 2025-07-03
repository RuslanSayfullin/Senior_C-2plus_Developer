#include <iostream>

template <typename T>

void CheckSize() {
    static_assert(sizeof(T) >= 4, "Type size must be at least 4 bytes.");
}

int main() {
    CheckSize<int>();

    return 0;
}