#include <stdio.h>

typedef struct point{
	int* x;
	int** y;
}POINT;

int main(){
	int n1=3;
	POINT p1;

	p1.x=&n1;
	p1.y=&p1.x;

	printf("%d %d %d\n",n1,*p1.x,**p1.y);

	return 0;
}
