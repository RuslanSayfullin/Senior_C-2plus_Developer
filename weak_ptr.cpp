#include <iostream>
#include <memory>

struct Node {
	std::weak_ptr<Node> next;
	~Node() {
		std::cout << "Node destroyed\n";
	}
};

int main() {
	std::shared_ptr<Node> node1 = std::make_shared<Node>();
	std::shared_ptr<Node> node2 = std::make_shared<Node>();

	node1->next = node2;
	node2->next = node1; // циклическая ссылка

	std::cout << "Before reset:\n";
	std::cout << "nodel use_count: " << node1.use_count() << "\n";
	std::cout << "node2 use_count: " << node2.use_count() << "\n";

	node1.reset();
	node2.reset();

	std::cout << "After reset:\n";
	std::cout << "node1 use_count: " << node1.use_count() << "\n";
	std::cout << "node2 use_count: " << node2.use_count() << "\n";

	return 0;
}
