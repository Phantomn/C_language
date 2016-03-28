#include <stdio.h>

typedef struct point{
	int x;
	int y;
}POINT;
void func1(POINT p){
	printf("%d %d\n", p.x, p.y);
}
void func2(POINT* p){
	printf("%d %d\n", (*p).x, (*p).y);
}
int main(){
	POINT p1={10,10};
	POINT p2={20,20};

	func1(p1);
	func2(&p2);

	return 0;
}
