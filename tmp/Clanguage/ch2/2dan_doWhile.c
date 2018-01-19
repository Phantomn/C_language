#include <stdio.h>

void main(){
	int dan;
	int i=1;
	int j=1;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &dan);
	i = dan;
	do{
		do{
			printf("%d * %d = %d\n", i,j,i*j);
			j++;
		}while(j<=9);
		i++;
	}while(i<=dan);
}
