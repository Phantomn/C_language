.LCO:
	.string "Hello World!\n"
.global main
main:
	pushl %ebp
	movl %ebp, %esp
	subl $0x04, %esp
	movl $0x100, -4(%ebp)
L1:
	decl -4(%ebp)
	movl $0x04, %eax
	movl $0x01, %ebx
	movl $.LCO, %ecx
	movl $0x0e, %edx
	int $0x80
	cmp $0x00, -4(%ebp)
	jne L1
	movl $0x01, %eax
	int $0x80
