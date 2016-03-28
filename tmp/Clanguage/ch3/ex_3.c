#include <stdio.h>

int main(){
	int x=3, y=5, z=3, k=2;
	int a;

	a = x < y || x < z && z < k;
	printf("결과 값 1 a : %d\n",a);


	a = (x < y || x < z) && z < k;
	printf("결과 값 2 a : %d\n",a);

	return 0;
}
