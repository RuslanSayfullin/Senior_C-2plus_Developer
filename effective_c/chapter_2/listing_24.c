#include <stdio.h>

// Имитация передачи аргументов по ссылке
void swap(int *pa, int *pb) {	// pa -> a: 21 pb -> b: 17
	int t = *pa;				// t: 21
	*pa = *pb;					// pa -> a: 17 pb -> b: 17
	*pb = t;					// pa -> a: 17 pb -> b: 21
}

int main(void) {
	int a = 21;		// a: 21
	int b = 17;		// b: 17

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);	// a: 17 b: 23
	return 0;
}
