#include <iostream>
#include <toml.hpp>

// TOML11 — это библиотека для парсинга и сериализации конфигурационных файлов в формате TOML (Tom's Obvious, Minimal Language) на C++.
int main() {
    auto config = toml::parse("config.toml");

    int width = toml::find<int>(config, "window", "width");
    std::string title = toml::find<std::string>(config, "window", "title");

    std::cout << "Width: " << width << "\nTitle: " << title < std::endl;

    return 0;
}