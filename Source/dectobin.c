#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int result[20];
	int num;
	int cnt=0;
	scanf("%d",&num);

	if(num>65536)
		exit(0);
	for(i=0;num>0;i++){
		result[i]=num%2;
		num/=2;
	}

	for(j=i-1;j>=0;j--){
		printf("%d",result[j]);
	}
	printf("\n");

	return 0;
}
