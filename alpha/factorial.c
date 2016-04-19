#include <stdio.h>

int factorial(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return n;
	else
		return n*factorial(n-1);
}

int main(){
	int i;
	int n;

	scanf("%d",&n);

	printf("%d! = %d\n",n,factorial(n));

	return 0;
}