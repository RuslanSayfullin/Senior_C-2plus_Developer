#include <algorithm>
#include <string>

std::string str1 = "apple";
std::string str2 = "banana";

bool result = std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end());

// result будет true, так как "apple" меньше "banana" в лексикографическом порядке
