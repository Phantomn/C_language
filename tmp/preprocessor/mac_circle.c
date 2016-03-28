#include <stdio.h>

#define PI 3.14

int main(){
	double area, circum, radius;

	fputs("Input radius : ", stdout);
	scanf("%lf",&radius);

	area=PI * radius * radius;
	circum=2*PI*radius;

	printf("circle area : %lf\n",area);
	printf("circle circum : %lf\n",circum);


	return 0;
}
