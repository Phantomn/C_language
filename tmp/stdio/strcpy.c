#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char* argv[]){
	char arr1[12]="Hello world";
	char arr2[12];
	char arr3[12];

	setreuid(3002,3002);
	strcpy(arr2,arr1);
	strncpy(arr3,arr1,12);
	strncpy(arr3,arr1,strlen(arr1)+1);
	strcpy(arr1,argv[1]);	

	puts(arr2);
	puts(arr3);

	return 0;
}
