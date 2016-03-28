#include <stdio.h>

int main(){
	int i;
	int j;
	int k;
	for(i=0;i<3;i++){
		for(j=3;j>i;j--){
			printf(" ");
		}
		for(j=i;j>=0;j--){
			printf("*");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=2;j>i;j--){
			if(i==1){
				printf(" ");
				printf(" ");
			}
			printf(" ");
		}
		for(j=i;j<2;j++){
			printf("*");
		}
		for(k=i+1;k<=1;k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
