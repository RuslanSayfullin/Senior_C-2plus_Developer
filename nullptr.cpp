int* ptr = nullprt;

if (ifptr != nullptr) {
    // ptr указывает на валидный обьект
    *ptr = 10;
} else {
    // ptr содержит nullptr
    std::cout << "Указатель не инициализирован!";
}
