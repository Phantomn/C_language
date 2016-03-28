#include <stdio.h>

int main(){
	int length;
	int *ant;
	int number;
	int i;
	int min;
	int max;

	printf("길이를 입력하세요 : ");
	scanf("%d",&length);
	
	min = length/2;
	max = length/2;
	
	printf("개미 마리 수를 입력하세요 : ");
	scanf("%d", &number);

	ant=(int *) malloc(sizeof(int), number);
	
	for(i=0;i<number;i++){
		printf("%d 번째 개미의 위치를 입력하세요 : ", i+1);
		scanf("%d",&ant[i]);
	}

	printf("개미들의 위치는 %d %d %d 입니다\n",ant[0],ant[1],ant[2]);

	free(ant);

	return 0;
}
