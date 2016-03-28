#include <stdio.h>

int main(){
	int a, b, c;
	int result, result2;

	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	printf("c : ");
	scanf("%d",&c);

	result = (a>b) ? a : ((a>c) ? a : (b>c) ? b : c);

	printf("max = %d\n",result);

	return 0;
}
