#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;

void func(POINT* call);

int main(){
	POINT p={10,20};
	func(&p);

	return 0;
}

void func(POINT* call){
	printf("%d %d\n",call->x, call->y);
	printf("%d %d\n",(*call).x,(*call).y);
}
