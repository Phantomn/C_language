#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
	int num;
	char str[11];
	int length;
	int i,j;

	scanf("%d %s",&num, str);
	length = strlen(str);

	if(length<num){
		printf("wrong");
		return 0;
	}
	else{
		for(i=0;i<length - (num -1);i++){
			for(j=0;j<num;j++){
				printf("%c",str[i+j]);
			}
			printf("\n");
		}
	}

	return 0;
}