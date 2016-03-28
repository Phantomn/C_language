#include <stdio.h>

int main(){
	double area, circum, radius;

	fputs("Input radius : ", stdout);
	scanf("%lf",&radius);

	area=3.14 * radius * radius;
	circum=2*3.14*radius;

	printf("circle area : %lf\n",area);
	printf("circle circum : %lf\n",circum);


	return 0;
}
