#include <iostream>
#include <cstdint>

void foo(int32_t param) {

    // Проверяем, что int32_t действительно 4 байта
    static_assert(sizeof(int32_t) == 4, "int32_t must be bits!");

}

int main() {
    foo(10);
    return 0;
}