#include <iostream>
#include <soci/soci.h>


/* Библиотека SOCI — удобная работа с базами данных в C++ */
int main() {
    soci::seesion sql(soci::sqlite3, "test.db");

    // Создание таблицы и вставка данных
    sql << "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT)";
    sql << "INSERT INTO users (name) VALUES ('John Doe')";

    // Получение данных
    std::string name;
    sql << "SELECT name FROM users WHERE id = 1", soci::in to(name);

    std::cout << "User: " << name << std::endl; // Вывод: User: John Doe

    return 0;
}