	.file	"3_70.c"
	.text
	.globl	proc
	.type	proc, @function
proc:
.LFB0:
	.cfi_startproc
	movq	8(%rdi), %rdx
	movq	(%rdx), %rax
	movq	(%rax), %rax
	subq	8(%rdx), %rax
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE0:
	.size	proc, .-proc
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
