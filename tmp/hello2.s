
.LCO:
	.string "Hello World!\n"
.global main
main:
	movl 	$0x4, 	%eax
	movl 	$0x1, 	%ebx
	movl 	$.LCO, 	%ecx
	movl 	$0x13, 	%edx
	int 	$0x80
	movl	$0x1,	%eax
	movl	$0x0,	%ebx
	int 	$0x80
