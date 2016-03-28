#include <stdio.h>

struct point{
	int x;
	int y;
};

int main(){
	struct point p1={10,20};
	struct point p2={30,40};
	struct point p3={0,0};

	p3.x=p2.x - p1.x;
	p3.y=p2.y - p1.y;
	printf("두 점 사이의 거리\n");
	printf("%d %d\n",p3.x,p3.y);

	return 0;
}
