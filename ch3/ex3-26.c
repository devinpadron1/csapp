// Exercise 3.26
//
// A function fun_a has the following overall structure:
//
// (The C template is the code below this comment.)
//
// The compiler generates:
//
//     # x in %rdi
//     fun_a:
//         movl  $0, %eax
//         jmp   .L5
//     .L6:
//         xorq  %rdi, %rax
//         shrq  %rdi
//     .L5:
//         testq %rdi, %rdi
//         jne   .L6
//         andl  $1, %eax
//         ret
//
// Determine the loop translation method, fill in the missing C code, and
// describe in English what the function computes.

long fun_a(unsigned long x)
{
    long val = 0;
    while (/* TODO */) {
        /* TODO */
    }
    return /* TODO */;
}
