	.file	"malloc.c"
	.globl	head
	.bss
	.align 8
	.type	head, @object
	.size	head, 8
head:
	.zero	8
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -112(%rbp)
	movq	$0, -104(%rbp)
	jmp	.L2
.L5:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	create
	movq	%rax, -104(%rbp)
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L3
	movq	-104(%rbp), %rax
	movq	%rax, head(%rip)
.L3:
	cmpq	$0, -112(%rbp)
	je	.L4
	movq	-112(%rbp), %rax
	movq	-104(%rbp), %rdx
	movq	%rdx, 24(%rax)
.L4:
	movq	-104(%rbp), %rax
	movq	%rax, -112(%rbp)
.L2:
	movq	stdin(%rip), %rdx
	leaq	-96(%rbp), %rax
	movl	$80, %esi
	movq	%rax, %rdi
	call	fgets
	testq	%rax, %rax
	jne	.L5
	movq	head(%rip), %rax
	movq	%rax, %rdi
	call	display
	movq	head(%rip), %rax
	movq	%rax, %rdi
	call	release
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"Name --> %s Open --> %s-%s\n"
	.text
	.globl	display
	.type	display, @function
display:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	jmp	.L9
.L10:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rcx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
.L9:
	cmpq	$0, -8(%rbp)
	jne	.L10
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	display, .-display
	.section	.rodata
.LC1:
	.string	"9:00"
.LC2:
	.string	"17:00"
	.text
	.globl	create
	.type	create, @function
create:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$32, %edi
	call	malloc
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	strdup
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	$.LC1, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$.LC2, 16(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 24(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	create, .-create
	.globl	release
	.type	release, @function
release:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	jmp	.L14
.L15:
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	free
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
.L14:
	cmpq	$0, -24(%rbp)
	jne	.L15
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	release, .-release
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
