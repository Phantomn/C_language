#include <stdio.h>
#include <math.h>

typedef struct Point2D{
	int x;
	int y;
}POINT2D;

int main(){
	POINT2D p1;
	POINT2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	printf("p1 : %d %d\n",p1.x, p1.y);
	printf("p2 : %d %d\n",p2.x, p2.y);


	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	double c = sqrt(pow(dx,2) + pow(dy,2));

	printf("%.2f\n",c);


	return 0;
}