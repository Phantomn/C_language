#include <stdio.h>

int main(){
	int arr1[4][3]={23,75,85,12,77,51,25,66,30,19,90,88};
	int arr2[4][3]={11,15,47,74,85,69,57,86,28,90,22,33};
	int i,j;


	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d + %d = %d\n",arr1[i][j],arr2[i][j],arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
		printf("\n");
		printf("\n");
		printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d - %d = %d\n",arr1[i][j],arr2[i][j],arr1[i][j]-arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
