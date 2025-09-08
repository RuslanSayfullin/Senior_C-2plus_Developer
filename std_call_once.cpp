#include <iostream>
#include <mutex>

class Resource {
public:
    void use() {
        std::cout << "Using Resource"<< std::endl;
    }
};

std::once_flag resource_flag;
Resource* resource = nullptr;

void initializeResource() {
    std::call_once(resource_flag, []() {
        resource = new Resource();
        std::cout << "Resource initialized" << std::endl;
    });
}

int main() {
    initializeResource();
    resource->use();    // Первое использование

    initializeResource();
    resource->use();    // Погвторное использование без переинициализации

    return 0;
}