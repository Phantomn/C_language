#include <stdio.h>

int main(){
	char arr1[10];
	char arr2[10]="Good luck";

	puts("문자열을 입력하세요.");
	gets(arr1);
	puts(arr1);

	puts(arr2);
	puts("Good luck");

	return 0;
}
