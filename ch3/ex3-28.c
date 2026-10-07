// Exercise 3.28
//
// A function fun_b has the following overall structure:
//
// (The C template is the code below this comment.)
//
// The compiler generates:
//
//     # x in %rdi
//     fun_b:
//         movl  $64, %edx
//         movl  $0, %eax
//     .L10:
//         movq  %rdi, %rcx
//         andl  $1, %ecx
//         addq  %rax, %rax
//         orq   %rcx, %rax
//         shrq  %rdi
//         subq  $1, %rdx
//         jne   .L10
//         rep; ret
//
// Reverse engineer the operation, fill in the missing C code, explain the
// loop structure, and describe what the function computes.

long fun_b(unsigned long x)
{
    long val = 0;
    long i;
    for (/* TODO */; /* TODO */; /* TODO */) {
        /* TODO */
    }
    return val;
}
