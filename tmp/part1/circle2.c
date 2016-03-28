#include <stdio.h>

int main(){
	double r, area, round;

	printf("Input r : ");
	scanf("%lf",&r);

	area = 3.14 * r * r;
	round = 2 * 3.14 * r;

	printf("area : %lf, round : %lf\n",area,round);

	return 0;
}
