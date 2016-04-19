#include <stdio.h>

int fibo(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
int main(){
	int n;
	int i;

	scanf("%d",&n);
	printf("1 ~ %d사이의 피보나치 수열은\n",n);

	for(i=1;i<=n+1;i++){
		printf("%d ",fibo(i));
	}
	printf("\n");

	return 0;
}