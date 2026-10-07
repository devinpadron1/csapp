// Exercise 3.54
//
// Function funct2 has the following prototype:
//
//     double funct2(double w, int x, float y, long z);
//
// GCC generates the following code:
//
//     # w in %xmm0, x in %edi, y in %xmm1, z in %rsi
//     funct2:
//         vcvtsi2ss  %edi, %xmm2, %xmm2
//         vmulss     %xmm1, %xmm2, %xmm1
//         vunpcklps  %xmm1, %xmm1, %xmm1
//         vcvtps2pd  %xmm1, %xmm2
//         vcvtsi2sdq %rsi, %xmm1, %xmm1
//         vdivsd     %xmm1, %xmm0, %xmm0
//         vsubsd     %xmm0, %xmm2, %xmm0
//         ret
//
// Write a C version of funct2.

double funct2(double w, int x, float y, long z)
{
    /* TODO */
}
