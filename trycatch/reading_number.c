#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void strrev(char *s){
	char tmp;
	int i;
	int len = strlen(s);
	for(i=0;i<len/2;i++){
		tmp =*(s+i);
		*(s+i) = *(s+len-1-i);
		*(s+len-1-i) = tmp;
	}
}

int main(){
	int num;
	int len;
	int i;
	char str[8];

	scanf("%d",&num);

	if(num>100000000){
		printf("error\n");
		exit(0);
	}

	sprintf(str, "%d", num);
	strrev(str);
	len = strlen(str);
	for(i=len-1;i>=0;i--){
			switch(str[i]){
				case '2':
					printf("이");
					break;
				case '3':
					printf("삼");
					break;
				case '4':
					printf("사");
					break;
				case '5':
					printf("오");
					break;
				case '6':
					printf("육");
					break;
				case '7':
					printf("칠");
					break;
				case '8':
					printf("팔");
					break;
				case '9':
					printf("구");
					break;
			}
			switch(i){
				case 0:
					if(str[i]=='1')
						printf("일");
					break;
				case 7:
				case 3:
					printf("천 ");
					break;
				case 6:
				case 2:
					printf("백 ");
					break;
				case 5:
				case 1:
					printf("십 ");
					break;
				case 4:
					printf("만 ");
					break;
				case 8:
					printf("억 ");
					break;
			}
		}
		printf("\n");
		return 0;
}
