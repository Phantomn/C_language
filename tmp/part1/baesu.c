#include <stdio.h>

int main(){
	int n;
	int i;
	int count=0;

	printf("Input number : ");
	scanf("%d",&n);

	for(i=1;i<=100;i++){
		if(i%n==0){
			printf("%d ",i);
			count++;
		}
	}
		printf("\n");
		printf("count : %d\n",count);
	return 0;
}
