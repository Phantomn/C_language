#include <stdio.h>
#include <string.h>

int main(){
	char arr1[6]="Hello";
	char arr2[3];

	strncpy(arr2,arr1,3);
	arr2[2]='\0';

	puts(arr2);

	return 0;
}
