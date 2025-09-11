#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;

    std::for_each(numbers.begin(), numbers.end(), [&sum](int n){
        sum += n;
    });

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

