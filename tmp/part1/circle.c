#include <stdio.h>

int main(){
	double r, v, result;


	printf("반지름, 시속 입력 : ");
	scanf("%lf %lf",&r,&v);

	result=(2*r*3.14)/(v/60);

	printf("result : %lf\n",result);

	return 0;
}
