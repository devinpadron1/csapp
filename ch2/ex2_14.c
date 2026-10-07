/* 
    CS:APP Practice Problem 2.14
    This is meant to highlight the importance between
    bitwise and logical operators


*/

#include <stdio.h>

int main(void) {
    char a = 0x55;
    char b = 0x46;

    printf("a & b = 0x%x\n", (a & b));
    printf("a | b = 0x%x\n", (a | b));
    printf("~a | ~b = 0x%x\n", (~a | ~b));
    printf("a & !b = 0x%x\n", (a & !b));\

    // 2.14 - True, True, False, True

    return 0;
}