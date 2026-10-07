#include <stdio.h>

int main(void) {
    unsigned int x = 0xF0F0;

    // Left shift
    printf("x << 4 = 0x%x\n", (x << 4));

    // Right shift
    printf("x >> 4 = 0x%x\n", (x >> 4));

    return 0;
}