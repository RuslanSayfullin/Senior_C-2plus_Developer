#include <iostream>
#include <magic_enum.hpp>

// Использование библиотеки magic_enum для работы с перечислениями в C++
enum class Color {Red, Green, Blue};

int main() {
    Color color = Color::Green;
    auto colorName = magic_enum::enum_name(color);
    std::cout << "Color: " << colorName << std::endl;

    auto colorValue = magic_enum::enum_cast<Color>("Blue");
    if (colorValue.has_value()) {
        std::cout << "Parsed Color: " << static_cast<int>(colorValue.value()) << std::endl;
    }
}


