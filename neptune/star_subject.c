#include <stdio.h>

int main(){
	int i,j,k;
	int n;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(k=5;k>0;k--){
			if(k>i)
				printf(" ");
			else
				printf("*");
		}
		for(j=0;j<5;j++){
			if(j>i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}