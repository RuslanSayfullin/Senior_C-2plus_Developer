#include <stdio.h>
#include <stdint.h>

/* программа определяет порядок байтов BIG-ENDIAN/LITTLE-ENDIAN */
int main() {
    uint16_t x = 0x0001;
    printf("%s -endian\n", *((uint8_t *) &x) ? "little" : "big");
}