#include <stdio.h>

int main(){
	char a='A';
	char b='B';

	const char* p=&a;

	printf("%c \n",*p);
	printf("%c \n",a);


	p=&b;
	printf("%c \n",*p);
	printf("%c \n",b);


	a='X';
	b='C';
//	*p='D';

	return 0;
}
