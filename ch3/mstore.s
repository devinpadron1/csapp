	.text
	.file	"mstore.c"
	.globl	multstore                       # -- Begin function multstore
	.p2align	4, 0x90
	.type	multstore,@function
multstore:                              # @multstore
# %bb.0:
	pushq	%rbx
	movq	%rdx, %rbx
	callq	mult2@PLT
	movq	%rax, (%rbx)
	popq	%rbx
	retq
.Lfunc_end0:
	.size	multstore, .Lfunc_end0-multstore
                                        # -- End function
	.section	".note.GNU-stack","",@progbits
	.addrsig
