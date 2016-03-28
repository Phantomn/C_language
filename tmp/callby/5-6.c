#include <stdio.h>

int* intput();

int main(){
	int* p=NULL;

	p=input();
	printf("%d\n",*p);

	return 0;
}

int* input(){
	int num1;
	scanf("%d", &num1);
	return &num1;
}
