.global main
main: call start
hello:
	movl $0x04, %eax
	movl $0x01, %ebx
	pop %esi
	movl %esi, %ecx
	movl $0x13, %edx
	int $0x80
	movl $0x01, %eax
	movl $0x00, %ebx
	int $0x80
start: call hello
	.string "Hello World!\n"
