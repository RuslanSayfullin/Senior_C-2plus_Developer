#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> myset = {5, 2, 3, 1, 4};

    std::cout << "myset contains:";
    for (int x : myset)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "myset's buckets contain:\n";
    for (unsigned i = 0; i < myset.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
	for (auto it = myset.begin(i); it != myset.end(i); ++it)
	    std::cout << ' ' << *it;
	std::cout << '\n';
    }
    return 0;
}
