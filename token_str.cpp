#include <iostream>
#include <sstream>
#include <vector>
#include <string>

struct Token {
    std::string type;
    std::string value;
};

int main() {
    std::string input = "hello 123 world";

    // Структура для хранения результатов
    std::vector<Token> tokens;

    // Поток для разбиения строки
    std::stringstream ss(input);

    // Разбиение по пробелам
    std::string temp;
    while(ss >> temp) {
        // Определение типа токена
        std::string type = "string";
        if(isdigit(temp[0])) {
            type = "number";
        }

        // Создание структуры Token
        Token t;
        t.type = type;
        t.value = temp;

        // Добавление результата
        tokens.push_back(t);
    }

    // Вывод результатов
    for(auto& t : tokens) {
        std::cout << t.type << ": " << t.value << "\n";
    }

    return 0;
}

// string: hello
// number: 123
// string: world