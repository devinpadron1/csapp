// Exercise 3.24
//
// For C code of this form, fill in the missing expressions:
//
// (The C template is the code below this comment.)
//
// With optimization level -Og, gcc produces:
//
//     # a in %rdi, b in %rsi
//     loop_while:
//         movl  $1, %eax
//         jmp   .L2
//     .L3:
//         leaq  (%rdi,%rsi), %rdx
//         imulq %rdx, %rax
//         addq  $1, %rdi
//     .L2:
//         cmpq  %rsi, %rdi
//         jl    .L3
//         rep; ret
//
// The compiler used a jump-to-middle translation. Fill in the missing parts
// of the C code.

long loop_while(long a, long b)
{
    long result = /* TODO */;
    while (/* TODO */) {
        result = /* TODO */;
        a = /* TODO */;
    }
    return result;
}
