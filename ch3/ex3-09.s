# Exercise 3.9
#
# Suppose we want to generate assembly code for the following C function:
#
#     long shift_left4_rightn(long x, long n)
#     {
#         x <<= 4;
#         x >>= n;
#         return x;
#     }
#
# Two instructions are omitted from this assembly. Parameters x and n are
# stored in %rdi and %rsi, respectively:
#
# (The assembly template is the code below this comment.)
#
# Fill in the missing instructions. The right shift should be performed
# arithmetically.

# long shift_left4_rightn(long x, long n)
# x in %rdi, n in %rsi
shift_left4_rightn:
    movq %rdi, %rax
    # TODO: x <<= 4
    movl %esi, %ecx
    # TODO: arithmetic right shift by n
    ret
