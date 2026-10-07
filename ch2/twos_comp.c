// CS:APP Two's Complement

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

int main(void) {
    short int v = -12345;
    unsigned short uv = (unsigned short)v;

    unsigned short c = v ^ uv;

    printf("v = %d, uv = %u\n", v, uv); // Decimal
    show_bytes((byte_pointer) &v, 2);
    show_bytes((byte_pointer) &uv, 2);

    unsigned int x = 0U;
    int y = -1;

    show_bytes((byte_pointer) &x, 1);
    show_bytes((byte_pointer) &y, 1);
    printf("y < x ? %s\n", (y < x) ? "true" : "false");

    return 0;
}
