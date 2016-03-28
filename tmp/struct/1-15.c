#include <stdio.h>

typedef struct point{
	int* x;
	int* y;
}POINT;

int main(){
	int n1=4;
	int n2=5;
	POINT p1;

	p1.x=&n1;
	p1.y=&n2;


	printf("%d %d\n",n1,n2);
	printf("%d %d\n",*p1.x,*p1.y);

	return 0;
}
