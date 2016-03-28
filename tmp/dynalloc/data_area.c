#include <stdio.h>

int a = 10;

int main(){
	int n1=10, n2=20;
	static int s=20;

	printf("Data print : %d %d %d %d\n",a,n1,n2,s);
	printf("Code area : %x %x \n",main, printf);
	printf("Stack area : %x %x \n",&n1,&n2);
	printf("Data area : %x %x\n",&a,&s);

	return 0;
}
