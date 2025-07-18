#include <iostream>
#include <tuple>

std::tuple<int, std::string, bool> GetUser() {
    return {1, "User", true};
}

int main() {
    auto [id, name, status] = GetUser();

    std::cout << id << " " << name << " " << status;

    return 0;
}
