// Exercise 3.25
//
// For C code of the following form, fill in the missing expressions:
//
// (The C template is the code below this comment.)
//
// With optimization enabled, gcc produces:
//
//     # a in %rdi, b in %rsi
//     loop_while2:
//         testq %rsi, %rsi
//         jle   .L8
//         movq  %rsi, %rax
//     .L7:
//         imulq %rdi, %rax
//         subq  %rdi, %rsi
//         testq %rsi, %rsi
//         jg    .L7
//         rep; ret
//     .L8:
//         movq  %rsi, %rax
//         ret
//
// The compiler used a guarded-do translation. Fill in the missing parts of
// the C code so it has behavior equivalent to the assembly.

long loop_while2(long a, long b)
{
    long result = /* TODO */;
    while (/* TODO */) {
        result = /* TODO */;
        b = /* TODO */;
    }
    return result;
}
