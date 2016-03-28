#include <stdio.h>

int main(){
	int sum=0, n,i;

	for(i=0;;i++){
		printf("Input Number : ");
		scanf("%d",&n);
		if(n==0){
			printf("SUM : %d, count : %d\n",sum,i);
			return 0;
		}
		sum+=n;
	}
	return 0;
}
