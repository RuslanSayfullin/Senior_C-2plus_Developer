#include <SQLiteCpp/SQLiteCpp.h>
#include <iostream>

int main() {
    try {
        SQLite::Database db("example.db3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);

        db.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT)");
        db.exec("INSERT INTO users (name) VALUES ('John Doe')");

        SQLite::Statement query(db, "SELECT * FROM users");
        while (query.executeStep()) {
            std::cout << "User: " << query.getColumn("name") << std::endl;
        }
    } catch (std::exception& e) {
        std::cerr << "SQLite error: " << e.what() << std::endl;
    }

    return 0;
}