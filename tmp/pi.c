#include <stdio.h>

#define PI 3.141592

int main(){
	int r;
	float circle;
	float area;

	printf("input r : ");
	scanf("%d",&r);

	if(r<=0){
		printf("Error\n");
		printf("!(r<=0)");
		return -1;
	}

	circle = 2 * PI * r;
	area = PI*r^2;
	printf("circle : %f\n",circle);
	printf("area : %f\n",area);
}