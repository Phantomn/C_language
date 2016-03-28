#include <stdio.h>

#define MAX 100
#define PI 3.14

int main(){
	int a=3;
	printf("before : %d, %lf\n",MAX,PI);

	#undef MAX
	#undef PI

	#define MAX 1000
	#define PI 3.141592

	printf("after : %d, %lf\n",MAX,PI);

	return 0;
}
