#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void strrev(char* ch);
int main(){
	char str[100];


	puts("Input string");
	gets(str);

	strrev(str);

	return 0;
}
void strrev(char* ch){
	int i,j;
	int len=strlen(ch);
	for(i=len-1;i>=0;i--)
		printf("%c",ch[i]);
}
