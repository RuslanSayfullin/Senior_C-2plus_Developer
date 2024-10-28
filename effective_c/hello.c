#include <stdio.h>
#include <stdlib.h>

int main(void) {
	if (puts("Hello, world!") == EOF) {
		return EXIT_FAILURE;
		// Здесь код никогда не выполняется
	}
	else {
		return EXIT_SUCCESS;
		// Здесь код никогда не выполняется
	}
}
