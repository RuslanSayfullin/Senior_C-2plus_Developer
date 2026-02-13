#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<int, std::string> myMap;

    // Inserting key-value pairs
    myMap.insert({ 1, "John" });
    myMap.insert({ 2, "Alice" });
    myMap.insert({ 3, "Bob" });

    // Accessing elements
    std::cout << "Value at key 2: " << myMap[2] << std::endl;

    // Updating an element
    myMap[1] = "Mark";

    // Removing an element
    myMap.erase(3);

    // Iterating over the map
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Cheking if a key exists
    if (myMap.find(2) != myMap.end()) {
        std::cout << "Key 2 exists." << std::endl;
    }

    return 0;
}