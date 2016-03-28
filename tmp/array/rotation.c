#include <stdio.h>

int main(){
	int array1[2][4]={1,2,3,4,5,6,7,8};
	int array2[4][2];

	int i,j;

	array2[0][0]=array1[1][0];
	array2[0][1]=array1[0][0];
	array2[0][2]=array1[1][1];
	array2[0][3]=array1[0][1];
	array2[0][4]=array1[1][2];
	array2[0][5]=array1[0][2];
	array2[0][6]=array1[1][3];
	array2[0][7]=array1[0][3];


	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("%d ",array2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
