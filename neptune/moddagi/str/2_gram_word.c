#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	char text[100] = "This is C language";
	char *tokens[30] = {NULL, };
	int count=0;
	int i;
	char *ptr = strtok(text, " ");

	while(ptr!=NULL){
		tokens[count] = ptr;
		count++;
		ptr = strtok(NULL, " ");
	}
	for(i=0;i<count-1;i++)
		printf("%s %s\n",tokens[i], tokens[i+1]);

	return 0;
}