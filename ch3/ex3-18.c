// Exercise 3.18
//
// Starting with this C code, fill in the missing expressions:
//
// (The C template is the code below this comment.)
//
// gcc generates:
//
//     # x in %rdi, y in %rsi, z in %rdx
//     test:
//         leaq  (%rdi,%rsi), %rax
//         addq  %rdx, %rax
//         cmpq  $-3, %rdi
//         jge   .L2
//         cmpq  %rdx, %rsi
//         jge   .L3
//         movq  %rdi, %rax
//         imulq %rsi, %rax
//         ret
//     .L3:
//         movq  %rsi, %rax
//         imulq %rdx, %rax
//         ret
//     .L2:
//         cmpq  $2, %rdi
//         jle   .L4
//         movq  %rdi, %rax
//         imulq %rdx, %rax
//     .L4:
//         rep; ret

long test(long x, long y, long z)
{
    long val = /* TODO */;
    if (/* TODO */) {
        if (/* TODO */)
            val = /* TODO */;
        else
            val = /* TODO */;
    } else if (/* TODO */) {
        val = /* TODO */;
    }
    return val;
}
