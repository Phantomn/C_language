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
		printf("\n");
	}
	return 0;
}