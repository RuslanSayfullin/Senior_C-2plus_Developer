#include <iostream>
#include <vector>
#include <string>

struct President {
	std::string name;
	int year;

	President(std::string n, int y) : name(n), year(y) { }
};

int main() {

	std::vector<President> presidents;

	// Вставка с помощью emplace_back
	presidents.emplace_back("Lincoln", 1861);

	// Эквиваленто:
	// President p"Lincoln", 1861);
	// presidents.push_back(p);
	
	// Но emplace_back конструируем обьект
	// прямо в векторе, избегая лишнего копирования
	
	for(auto& p : presidents) {
		std::cout << p.name << " " << p.year << "\n";
	}

	// Выведет:
	// Lincoln 1861
}
