#include <stdio.h>

int main(){
	double ex_rate = 1089.7;

	int won;
	double result;

	printf("달러를 입력하세요 : ");
	scanf("%d",&won);

	result = won * ex_rate;

	printf("%d 달러는%.2lf원입니다.\n",won,result);

	return 0;
}
