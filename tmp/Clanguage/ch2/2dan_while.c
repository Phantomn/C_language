#include <stdio.h>

void main(){
	int dan;
	int i=1;
	int j=1;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &dan);
	i = dan;
	while(i<=dan){
		while(j<=9){
			printf("%d * %d = %d\n", i,j,i*j);
			j++;
		}
		i++;
	}
}
