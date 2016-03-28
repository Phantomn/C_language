#include <stdio.h>

int main(){
	int array[2][3]={1,2,3,4,5,6};

	int i,j,k=0;

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d %x\n",array[i][j],&array[i][j]);
		}
	}
	printf("---------\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d %x\n",*(*(array+i)+k),*(array+i)+k);
			k++;
		}
		k=0;
	}

	return 0;
}
