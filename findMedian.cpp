#include <iostream>
#include <vector>

double findMedian(const std::vector<int>& arr) {
    size_t size = arr.size();

    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    std::vector<int> arr1 = {1, 3, 3, 6, 7, 8, 9};
    std::vector<int> arr2 = {1, 2, 3, 4, 5, 6, 8, 9};

    std::cout << findMedian(arr1) << std::endl; // Вернет 6
    std::cout << findMedian(arr2) << std::endl; // Вернет 4.5

    return 0;
}