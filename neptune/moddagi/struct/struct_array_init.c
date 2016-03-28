#include <stdio.h>

typedef struct Point2D{
	int x;
	int y;
}POINT;

int main(){
	POINT p[3] = {{.x = 10, .y = 20}, {.x =30, .y = 40}, {.x=50, .y=60}};

	printf("%d %d\n",p[0].x, p[0].y);
	printf("%d %d\n",p[1].x, p[1].y);
	printf("%d %d\n",p[2].x, p[2].y);

	POINT p2[3] = {{10,20}, {30,40}, {50,60}};

	printf("%d %d\n",p2[0].x, p2[0].y);
	printf("%d %d\n",p2[1].x, p2[1].y);
	printf("%d %d\n",p2[2].x, p2[2].y);
	return 0;
}