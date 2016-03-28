#include <stdio.h>

int main(){
	int arr[10]={1,3,2,4,6,5,7,9,10,8};
	int i,j;
	int temp;

	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}
