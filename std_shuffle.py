#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
        std::vector<int> v = {1, 2, 3, 4, 5};
        std::shuffle(v.begin(), v.end());

        for (int i : v) {
            std::cout << i << " ";
        }

        std::cout << std::endl;

        return 0;
}
