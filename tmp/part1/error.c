#include <stdio.h>


int main(){

	double result;
	int input1;
	int input2;

	printf("input 2 number = ");
	scanf("%d %d", &input1, &input2);

	result = (double)input1 / input2;
	printf(" division result : %lf\n", result);

	return 0;
}
