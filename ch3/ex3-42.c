// Exercise 3.42
//
// The structure and function prototype are:
//
//     struct ELE {
//         long v;
//         struct ELE *p;
//     };
//
//     long fun(struct ELE *ptr);
//
// gcc generates:
//
//     # ptr in %rdi
//     fun:
//         movl  $0, %eax
//         jmp   .L2
//     .L3:
//         addq  (%rdi), %rax
//         movq  8(%rdi), %rdi
//     .L2:
//         testq %rdi, %rdi
//         jne   .L3
//         rep; ret
//
// Write C code for fun. Describe the data structure and the operation
// performed by fun.

struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr)
{
    /* TODO */
}
