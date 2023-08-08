std::vector<int> vec = {1, 2, 3, 4};

auto it = std::find(vec.begin(), vec.end(), 3);

if (it != vec.end()) {
    std::cout << "Element found: " << *it << std::endl;
} else {
    std::cout << "Element not found" << std::endl;
}

// Element found: 3
