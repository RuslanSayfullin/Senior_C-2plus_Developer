#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	using namespace std;
	std::vector<int> myints = {1, 2, 3}

	std::cout << "The 3! possible permutations with 3 elements:\n";
	do {
		for (int i : myints) {
			std::cout << i << ' ';
		}
		std::cout << '\n';
	} while (std::next_permutation(myints.begin(), myints.end()));
	return 0;

}
