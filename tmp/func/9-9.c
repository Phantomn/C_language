#include <stdio.h>

void count(void);

int main(void){
	count();
	count();
	count();
	return 0;
}

void count(void){
	static int x=0;
	int y=0;

	x+=1;
	y+=1;

	printf("x : %d, y : %d\n",x,y);
}
