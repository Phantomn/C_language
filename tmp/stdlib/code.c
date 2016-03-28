#include <stdio.h>
#include <string.h>

int main(){
	char a[]="string";
	char b[]="string";

	if(!strcmp(a,b))
		puts("a and b is same");
	else
		puts("a and b is not same");
	return 0;
}
