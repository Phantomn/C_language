#include <stdio.h>

int main(){
	int grade[10];
	int sum=0;
	double average;
	int i;


	for(i=0;i<10;i++){
		printf("Input score : ");
		scanf("%d",&grade[i]);
	}

	for(i=0;i<10;i++)
		sum+=grade[i];

	average = (double)sum / 10;

	printf("sum : %d, average : %.2lf \n",sum,average);

	return 0;
}
