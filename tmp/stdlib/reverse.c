#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str[100];
	

	puts("Input string");
	gets(str);

	strrev(str);
	puts(str);

	return 0;
}
