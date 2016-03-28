#include <stdio.h>

int main(){
	char a='A';
	char b='B';
	const char* const p=&a;

	printf("%c \n", *p);
	printf("%c \n", a);

	a='X';
	b='C';

	printf("%c \n",a);
	printf("%c \n",b);



	p=&b;
	*p='D';

	return 0;
}
