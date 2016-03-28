#include <stdio.h>

int main(){
	int arr[9][9];
	int arr2[8]={2,3,4,5,6,7,8,9};
	int i,j;

	for(i=2;i<=9;i++){
		for(j=1;j<=9;j++){
			arr[i-2][j-1]=i*j;
		}
	}


	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(i==8)
				return 0;
			else
				printf("%d * %d = %d\n",arr2[i],j+1,arr[i][j]);
		}
		printf("--------------------------\n");
	}
	return 0;
}
