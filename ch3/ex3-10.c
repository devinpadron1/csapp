// Exercise 3.10
//
// In the following variant of the function from Figure 3.11(a), fill in the
// missing expressions:
//
// (The C template is the code below this comment.)
//
// The generated assembly is:
//
//     # x in %rdi, y in %rsi, z in %rdx
//     arith2:
//         orq %rsi, %rdi
//         sarq $3, %rdi
//         notq %rdi
//         movq %rdx, %rax
//         subq %rdi, %rax
//         ret

long arith2(long x, long y, long z)
{
    long t1 = /* TODO */;
    long t2 = /* TODO */;
    long t3 = /* TODO */;
    long t4 = /* TODO */;
    return t4;
}
