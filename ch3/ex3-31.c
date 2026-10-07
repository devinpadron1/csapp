// Exercise 3.31
//
// For a C function with the following structure, fill in the missing parts
// of the C code using the assembly code and jump table shown in Figure 3.24:
//
// (The C template is the code below this comment.)
//
// Except for the ordering of case labels C and D, there is only one way to
// fit the cases into this template.
//
// Figure 3.24 Assembly code and jump table for Problem 3.31.
// (Register comment corrected per the official CS:APP3e errata.)
//
//     (a) Code
//
//     void switcher(long a, long b, long c, long *dest)
//     a in %rdi, b in %rsi, c in %rdx, dest in %rcx
//     1   switcher:
//     2     cmpq    $7, %rdi
//     3     ja      .L2
//     4     jmp     *.L4(,%rdi,8)
//     5     .section .rodata
//     6   .L7:
//     7     xorq    $15, %rsi
//     8     movq    %rsi, %rdx
//     9   .L3:
//     10    leaq    112(%rdx), %rdi
//     11    jmp     .L6
//     12  .L5:
//     13    leaq    (%rdx,%rsi), %rdi
//     14    salq    $2, %rdi
//     15    jmp     .L6
//     16  .L2:
//     17    movq    %rsi, %rdi
//     18  .L6:
//     19    movq    %rdi, (%rcx)
//     20    ret
//
//     (b) Jump table
//
//     1   .L4:
//     2     .quad   .L3
//     3     .quad   .L2
//     4     .quad   .L5
//     5     .quad   .L2
//     6     .quad   .L6
//     7     .quad   .L7
//     8     .quad   .L2
//     9     .quad   .L5

void switcher(long a, long b, long c, long *dest)
{
    long val;
    switch (a) {
    case /* TODO */:              /* Case A */
        c = /* TODO */;
        /* Fall through. */
    case /* TODO */:              /* Case B */
        val = /* TODO */;
        break;
    case /* TODO */:              /* Case C */
    case /* TODO */:              /* Case D */
        val = /* TODO */;
        break;
    case /* TODO */:              /* Case E */
        val = /* TODO */;
        break;
    default:
        val = /* TODO */;
    }
    *dest = val;
}
