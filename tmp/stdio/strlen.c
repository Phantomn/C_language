#include <stdio.h>
#include <string.h>

int main(){
	char arr1[]="Hello C";
	char arr2[]="안녕하세요";

	printf("eng len : %d\n",strlen(arr1));
	printf("kor len : %d\n",strlen(arr2));


	printf("eng size : %d\n",sizeof(arr1));
	printf("kor size : %d\n",sizeof(arr2));


	return 0;
}
