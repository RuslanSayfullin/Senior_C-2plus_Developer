#include <algorithm>
#include <execution>

int main() {
	int arr[] = {1, 2, 3, 4, 5};

	std::execution::execute(std::seq, stf::for_each(arr , arr + 5, [](int x) {
		std::cout << x << std::endl;
	}));
}
