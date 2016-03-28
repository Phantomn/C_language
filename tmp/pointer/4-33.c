#include <stdio.h>

int main(){
	char a='A';
	char b='B';

	char* const p=&a;

	*p='C';
	printf("%c \n", *p);
	printf("%c \n", a);


	//p=&b;
	

	return 0;
}
