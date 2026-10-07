// CS:APP Practice Problem 2.13

#include <stdio.h>

int main(void) {
    int32_t x = 0x87654321;
    printf("x = 0x%x\n", x);
    
    // Find the least significant byte of x
    int32_t x_least_sig_byte = x & 0x000000ff;
    printf("x_least_sig_byte = 0x%x\n", x_least_sig_byte);
    
    // All but least significant byte of x complemented
    int32_t complement = ~(x & 0xffffff00);
    printf("complement = 0x%x\n", complement);
    
    // Least significant byte set to all ones
    int32_t all_ones = x | 0x000000ff;
    printf("all_ones = 0x%x\n", all_ones);
    
    return 0;
}