#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>

int main(){
	char str[61];

	scanf("%s",str);

	char *ptr = strtok(str, ".");

	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strtok(NULL, ".");
	}
	return 0;
}