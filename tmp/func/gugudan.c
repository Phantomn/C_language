#include <stdio.h>

int main(){
	int arr[9];
	int i,n,j;

	printf("Input Number : ");
	scanf("%d",&n);

	for(j=0;j<9;j++){
		arr[j]=n*j+1;
	}
	for(i=n;i==n;i++){
		for(j=1;j<=9;j++){
			printf("%d * %d = %d\n",i,j,arr[j-1]);
		}
	}
	return 0;
}
