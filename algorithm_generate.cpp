#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec(10);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 6);

    auto rng = [&dist, &gen](){return dist(gen);};

    std::generate(vec.begin(), vec.end(), rng);

    for(int n : vec) {
        std::cout << n << std::endl;
    }

    return 0;
}