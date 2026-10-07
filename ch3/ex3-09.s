# Exercise 3.9
# Fill in the two omitted instructions described in ex3-9.md.

# long shift_left4_rightn(long x, long n)
# x in %rdi, n in %rsi
shift_left4_rightn:
    movq %rdi, %rax
    # TODO: x <<= 4
    movl %esi, %ecx
    # TODO: arithmetic right shift by n
    ret
