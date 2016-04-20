#include <stdio.h>
#include <math.h>

int main(){
	double bmi;
	double kg, m;

	scanf("%lf %lf",&kg,&m);

	bmi = kg/pow((m/100),2);		// 무게를 키의 제곱으로 나눔

	if(bmi<20)
		printf("low weight\n");
	else if(bmi>=20 && bmi<25)
		printf("normal\n");
	else if(bmi>=25)
		printf("over weight\n");
	printf("%.2lf\n",bmi);
	return 0;
}