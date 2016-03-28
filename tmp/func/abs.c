#include <stdio.h>

int abs(int n);

int main(){
	int a;
	int result;

	printf("Input : ");
	scanf("%d",&a);

	result = abs(a);
	printf("%d Abs Number is %d\n",a,result);

	return 0;
}
int abs(int n){
	if(n<0)
		return -n;
	else if(n==0)
		return 0;
	else
		return n;
}
