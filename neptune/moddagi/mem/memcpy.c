#include <stdio.h>
#include <string.h>

typedef struct Point2D{
	int x;
	int y;
}POINT2D;

int main(){
	POINT2D p1;
	POINT2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(POINT2D));

	printf("%d %d\n",p2.x, p2.y);

	return 0;
}