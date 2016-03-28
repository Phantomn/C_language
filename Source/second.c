#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int arr[6]={0,};;
	int first=0;
	int second;
	scanf("%d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
	int last=6;
	int mid;
	int temp;

	for(i=0;i<last;i++){
		for(j=i+1;j<last;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
		printf("%d ",arr[i]);
	printf("\n");
	second=arr[4];

	printf("%d",second);
	return 0;
}
