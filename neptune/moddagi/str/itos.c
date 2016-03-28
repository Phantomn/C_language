#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
	char s1[10];
	int num1=283;

	sprintf(s1, "%d", num1);

	printf("%c%c%c\n",s1[0],s1[1],s1[2]);

	return 0;
}