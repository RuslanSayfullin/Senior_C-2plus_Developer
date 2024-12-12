#include<bits/stdc++.h>

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {7, 7, 7, 7, 7};

    // Print elements
    std::cout << "Vector1 contains: ";
    for (int i = 0; i < vec1.size(); i++)
        std::cout << " " << vec1[i];
    std:: cout << "\n";

    // Print elements
    std::cout << "Vector2 contains: ";
    for (int i = 0; i < vec2.size(); i++)
        std::cout << " " << vec2[i];
    std:: cout << "\n";

    // std::move function
    std::move(vec1.begin(), vec1.begin() + 4, vec2.begin() +1);

    // Print elements
    std::cout << "Vector2 contains after std::move function: ";
    for (unsigned int i = 0; i < vec2.size(); i++)
        std::cout << " " << vec2[i];
    std::cout << "\n";

    return 0;        
}