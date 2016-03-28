#include <stdio.h>

int sum(int n);

int main(){
	int n;

	int result;
	printf("Input number : ");
	scanf("%d",&n);

	result=sum(n);

	printf("sum of 1 ~ %d : %d\n",n,result);

	return 0;
}
int sum(int n){
	if(n==1)
		return n;
	else
		return n+sum(n-1);
}
