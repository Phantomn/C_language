#include <stdio.h>

int main(){
	int arr[7];
	int temp;

	int i,j;
	for(i=0;i<7;i++){
		printf("Input : ");
		scanf("%d",&arr[i]);
	}

	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(arr[i]!=0){
				break;
			}
			else{
				arr[i]=arr[j];
				arr[j]=0;
			}
		}
	}
	for(i=0;i<7;i++)
		printf("%d",arr[i]);
	printf("\n");

	return 0;
}
