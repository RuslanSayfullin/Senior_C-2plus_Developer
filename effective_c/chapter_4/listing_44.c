// Порядок вычисления аргументов функции
int glob;   // статическое хранилище инициализируется с помощью 0

int f(void) {
    return glob + 10;
}
int g(void) {
    glob = 42;
    return glob;
}
int main(void) {
    int max_value = max(f(), g());
    // --snip--
}
