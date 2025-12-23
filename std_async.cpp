#include <iostream>
#include <future>

int AddNumbers(int a, int b) {
    return a + b;
}

int main() {
    // Asynchronously execute AddNumbers(5, 10)
    std::future<int> futureSum = std::async(AddNumbers, 5, 10);

    // Perform other tasks concurrently with AddNumbers

    // Retrivethe result when needed
    int result = futureSum.get();

    std::cout << "Sum: " << result << std::endl;

    return 0;
}