#include <stdio.h>

int main(){
	int x, y, z;
	printf("Input x : ");
	scanf("%d",&x);
	printf("Input y : ");
	scanf("%d",&y);
	printf("Input z : ");
	scanf("%d",&z);


	printf("(x + y) * (x + z) / (y %% z) = %d\n",(x+y)*(x+z)/(y%z));

	return 0;
}
