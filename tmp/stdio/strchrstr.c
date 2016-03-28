#include <stdio.h>
#include <string.h>

int main(){
	char arr1[50]="Good-morning, Good-afternoon, Good-evening";
	char arr2[10]="morning";
	char* p1=NULL;
	char* p2=NULL;

	p1=strchr(arr1,'a');
	p2=strstr(arr1,arr2);

	printf("문자 a의 위치 : %x\n",p1);
	printf("string : %s\n",p1);
	printf("---------------------------------------------------------------\n");
	printf("문자열의 시작위치 : %x\n",p2);
	printf("string : %s\n",p2);

	return 0;
}
