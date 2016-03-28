#include <stdio.h>

int main(){
	double arr[10];
	int i;
	double sum;
	double average=0;


	for(i=0;i<10;i++){
		printf("Input Number : ");
		scanf("%lf",&arr[i]);
	}
	for(i=0;i<10;i++){
		sum+=arr[i];
	}
	average=sum/10;

	printf("average : %.2lf\n",average);
	return 0;
}

