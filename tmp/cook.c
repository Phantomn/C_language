#include <stdio.h>

void main(){
	int i;
	int man=1;
	int max=0;
	int sum=0;
	int j,cook;
	int arr[4]={0,};

	for(i=0;i<5;i++){
		for(j=0;j<4;j++)
			scanf("%d",&arr[j]);
		for(j=0;j<4;j++)
			sum+=arr[j];
		if(sum>=max){	
			max=sum;
			cook=man;
		}
		man++;
		sum=0;
		for(j=0;j<4;j++)
			arr[j]=0;
	}
	printf("%d %d\n",cook,max);
}
