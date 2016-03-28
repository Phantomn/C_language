#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[100];
	gets(str);
	int len=strlen(str);
	int cel;
	char *ptr=&str[len-2];
	ptr="\n";
	int num=atoi(str);

	cel=(num-30)/2;
	printf("%dC",cel);

	return 0;
}
