#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> m;
	m.emplace("a", 1);
	m.emplace("b", 2);
	m.emplace("c", 3);

	for (const auto& p : m) {
		std::cout << p.first << " => " << p.second << '\n';
	}
}
