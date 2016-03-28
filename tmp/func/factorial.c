#include <stdio.h>
int factorial(int n);

int main(){
	int a;
	int result;

	printf("Input : ");
	scanf("%d",&a);

	result=factorial(a);
	printf("%d factorial is : %d\n",a,result);
	return 0;
}
int factorial(int n){
	if(n<=1)
		return 1;
	else
		return n * factorial(n-1);
}
