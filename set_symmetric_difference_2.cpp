#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

/*
Алгоритм set_symmetric_difference
Строит отсортированную последовательность из элементов, которые встречаются только в первой последовательности [first1, last1) или только во второй - [first2, last2)
*/
int main() {
    std::vector<int> v1{1,2,3,4,5,6,7,8   };
    std::vector<int> v2{        5,  7,  9,10};
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    std::vector<int> v_symDifference;

    std::set_symmetric_difference(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        std::back_inserter(v_symDifference));
    
    for(int n : v_symDifference)
    std::cout << n << ' ';
}

// 1 2 3 4 6 8 9 10