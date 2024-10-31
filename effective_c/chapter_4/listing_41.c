// Передача одной функции в другую
int f(void) {
    // --snip--
    return 0;
}

void g(int (*func)(void)) {
    // --snip--
    if (func() !=0)
        printf("g failed\n");
    // --snip--
}
// --snip--
g(f); // вызывает п с аргументом в виде указателя на функцию
// --snip--