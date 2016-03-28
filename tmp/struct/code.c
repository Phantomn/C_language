#include <stdio.h>

typedef struct sp{
	int x;
	int y;
}SP;

int main(){
	SP s1={10,20};
	SP* sp;

	sp=&s1;

	printf("%d %d\n",s1.x,s1.y);
	printf("%d %d\n",(*sp).x,(*sp).y);
	printf("%d %d\n",sp->x,sp->y);

	return 0;
}
