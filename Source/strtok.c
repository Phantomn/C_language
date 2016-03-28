#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[1000];
	char *ptr;
	int ndx;

	printf("Input : ");
	gets(str);

	printf("%s\n",str);

	ptr=strtok(str, " ");
	printf("%s\n",ptr);

	while(ptr=strtok(NULL," ")){
		printf("%s\n",ptr);
	}
	printf("after : %s\n",str);
	return 0;
}
