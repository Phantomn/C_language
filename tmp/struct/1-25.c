#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

POINT func(void);

int main(){
	POINT p;
	p=func();
	printf("%d %d\n",p.x,p.y);

	return 0;
}

POINT func(){
	POINT call={10,20};
	return call;
}
