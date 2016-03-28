#include <stdio.h>

int fibonacci(int n);

int main(){
	int i;
	for(i=1;i<=12;i++){
		printf("%d ",fibonacci(i));
	}
	printf("\n");
}

int fibonacci(int n){
	if(n==1||n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}
