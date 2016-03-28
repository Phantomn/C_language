#include <stdio.h>

#define MUL(x,y) x*y
int mul(x,y);

int main(){
	int a,b;

	printf("Two int input : ");
	scanf("%d %d",&a,&b);

	printf("macro result : %d\n",MUL(a+1,b+1));
	printf("func result : %d\n",mul(a+1,b+1));

	return 0;
}
int mul(x, y){
	return x*y;
}
