#include <stdio.h>

typedef struct Point2D {
    int x;
    int y;
}POINT;

int main()
{
    POINT p[3];

    p[0].x = 10;
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

	printf("%d\n",sizeof(p)/sizeof(POINT));

    return 0;
}