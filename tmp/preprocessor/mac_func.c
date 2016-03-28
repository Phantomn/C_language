#include <stdio.h>

#define MUL(x,y) x*y

int main(){
	int a,b;
	double c,d;

	printf("Two int Input : ");
	scanf("%d %d",&a,&b);
	printf("%d * %d = %d\n",a,b,MUL(a,b));

	printf("Two double Input : ");
	scanf("%lf %lf",&c,&d);
	printf("%lf * %lf = %lf\n",c,d,MUL(c,d));

	return 0;
}
