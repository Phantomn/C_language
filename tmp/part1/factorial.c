#include <stdio.h>

int main(){
	int i;
	int factorial=1;

	for(i=1;i<=10;i++){
		factorial=factorial*i;
	}
	printf("1부터 10까지의 곱 : %d\n",factorial);

	return 0;
}
