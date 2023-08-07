#include <memory>

std::unique_ptr<int> p1(new int(5));	// p1 владеет обьектом

std::shared_ptr<int> p2 = std::make_shared<int>(10); // создание shared_ptr
std::shared_prt<int> p3 = p2;	// p3 ссылается на тот же обьект

p1.reset();	// освобождает память
p2.reset();	// память не освобится, т.к. есть p3

std::weak_ptr<int> wp(p3);	// wp не владеет обьектом
