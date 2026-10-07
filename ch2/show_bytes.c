#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main(void) {
    // test_show_bytes
    int ival = 0x12345678;
    float fval = (float) ival;
    void *ptr = &ival;

    char *str = "abcde";
    show_bytes((byte_pointer) str, 6);

    printf("Integer bytes: ");
    show_int(ival);

    printf("Float bytes: ");
    show_float(fval);

    printf("Pointer bytes: ");
    show_pointer(ptr);

    return 0;
}
