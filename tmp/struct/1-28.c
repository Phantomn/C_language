#include <stdio.h>

union point{
	int x;
	int y;
};

int main(){
	union point p;
	p.x=10;

	printf("%d %d\n",p.x,p.y);

	return 0;
}
