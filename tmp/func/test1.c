#include <stdio.h>
#include </home/level1/tmp/func/test.h>
int main(){
	extern int n1;
	extern int n2;
	extern int n3;


	printf("n1 : %d\n",n1);
	printf("n2 : %d\n",n2);
	printf("n3 : %d\n",n3);

	printf("sum result : %d\n",n1+n2+n3);
	return 0;
}
