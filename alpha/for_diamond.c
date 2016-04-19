#include <stdio.h>

int main(){
	int i,j;
	int hei;

	printf("Input height : ");
	scanf("%d",&hei);

	for(i=0;i<hei;i++){
		for(j=hei-1;j>=0;j--){
			if(j<=i)
				printf("*");
			else
				printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<hei;i++){
		for(j=0;j<hei;j++){
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		for(j=hei-1;j>i;j--)
			printf("*");
		printf("\n");
	}
	return 0;
}