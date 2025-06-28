	.file	"nestfor.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "The times table:\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$10, 28(%esp)
	movl	$10, 24(%esp)
	movl	$LC0, (%esp)
	call	_puts
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_print_ttable
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
LC1:
	.ascii "%d\11\0"
	.text
	.globl	_print_ttable
	.def	_print_ttable;	.scl	2;	.type	32;	.endef
_print_ttable:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$1, -12(%ebp)
	jmp	L4
L7:
	movl	$1, -16(%ebp)
	jmp	L5
L6:
	movl	-12(%ebp), %eax
	imull	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	addl	$1, -16(%ebp)
L5:
	movl	-16(%ebp), %eax
	cmpl	12(%ebp), %eax
	jle	L6
	movl	$10, (%esp)
	call	_putchar
	addl	$1, -12(%ebp)
L4:
	movl	-12(%ebp), %eax
	cmpl	8(%ebp), %eax
	jle	L7
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
