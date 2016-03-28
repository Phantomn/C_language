#include <stdio.h>

int main(){
	int i,j,k,l;

	for(i=5;i>1;i--){
		for(l=5;l>i;l--){
			printf(" ");
		}
		for(j=1;j<i;j++){
			printf("*");
		}
		for(k=1;k<i-1;k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
