#include <stdio.h>
#include <ctype.h>

int main(){
	char a1='A';
	char a2='a';

	printf("아스키 코드 : %d\n",toascii(a1));
	printf("소문자: %c\n",toupper(a2));
	printf("대문자: %c\n",tolower(a2));


	return 0;
}
