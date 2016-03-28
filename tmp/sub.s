
.LCO:
	.string "%d %d"
.global main
main:
	call start
hello: 
	pop %esi
	leal -8(%ebp), %eax
	leal -4(%ebp), %ebx
	pushl %eax
	pushl %ebx
	pushl $.LCO
	call scanf
	xor %eax, %eax
	add -4(%ebp), %eax
	sub -8(%ebp), %eax
	pushl %eax
	pushl %esi
	call printf
	add $0x8, %esp
	movl $0x01, %eax
	movl $0x00, %ebx
	int $0x80

start: call hello
	.string "%d\n"
