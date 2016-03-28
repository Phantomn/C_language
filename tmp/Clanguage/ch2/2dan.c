#include <stdio.h>

int main(){
	int dan;
	int i;
	int j;

	printf("단 수를 입력하세요.\n");
	scanf("%d",&dan);

	for(i=dan;i<=dan;i++){
		for(j=1;j<=9;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
	}
	return 0;
}
