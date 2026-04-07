#include <variant>
#include <iostream>
#include <string>

int main() {
    std::variant<int, float, std::string> var;

    var = 10;   // Store an int
    std::cout << std::get<int>(var) << std::endl;   // Reteive the stored int

    var = 3.14f;    // Store a float
    std::cout << std::get<float>(var) << std::endl; // Retrive the stored float

    var = "Hello, World!";  // Store a string
    std::cout << std::get<std::string>(var) << std::endl;   // Retrive the stored string

    try {
        std::cout << std::get<int>(var) << std::endl;   // Accessing the wrong type throws
    } catch (const std::bad_variant_access& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}