#include <stdio.h>

#define OUTPUT(a, b, c) a ## b ## c

int main(){
	int a=3;

	printf("%d \n", a);
	printf("%d \n", OUTPUT(a, = , 5));
	printf("%d \n",a);

	return 0;
}
