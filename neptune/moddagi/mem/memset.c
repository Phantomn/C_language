#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point2D{
	int x;
	int y;
}POINT;

int main(){
	POINT *p1 = malloc(sizeof(POINT));

	memset(p1, 0, sizeof(POINT));

	printf("%d %d\n",p1->x, p1->y);

	free(p1);

	return 0;
}