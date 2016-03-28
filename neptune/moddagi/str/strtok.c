#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNING
int main(){
	char s1[30] = "You Can Advance";

	char *ptr = strtok(s1, " ");

	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strtok(NULL, " ");
	}
	return 0;
}