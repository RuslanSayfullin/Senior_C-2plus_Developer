#include <stdio.h>

// Имитация передачи аргументов по ссылке
void swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main(void) {
	int a = 21;
	int b = 17;

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
