	.file	"function4.c"
	.text
	.globl	y
	.data
	.align 4
y:
	.long	1
	.text
	.globl	luasPersegiPanjang
	.def	luasPersegiPanjang;	.scl	2;	.type	32;	.endef
	.seh_proc	luasPersegiPanjang
luasPersegiPanjang:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	imull	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	y(%rip), %eax
	imull	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "%d\12\0"
.LC1:
	.ascii "%d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$5, -4(%rbp)
	movl	$6, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	luasPersegiPanjang
	movl	%eax, -12(%rbp)
	movl	y(%rip), %eax
	leaq	.LC0(%rip), %rcx
	movl	%eax, %edx
	call	printf
	movl	-12(%rbp), %eax
	leaq	.LC1(%rip), %rcx
	movl	%eax, %edx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev8, Built by MSYS2 project) 15.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
