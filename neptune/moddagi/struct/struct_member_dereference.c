#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
	char c1;
	int *numPtr;
}DATA;

int main(){
	int num1 = 10;
	DATA d1;
	DATA *d2 = malloc(sizeof(DATA));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n",(*d2).c1);

	printf("%d\n",*(*d2).numPtr);

	free(d2);

	return 0;
}