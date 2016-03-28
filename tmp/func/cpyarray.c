#include <stdio.h>

int main(){
	int arr[6]={1,2,3};
	int i;

	arr[5]=arr[0];
	arr[4]=arr[1];
	arr[3]=arr[2];

	for(i=0;i<6;i++)
		printf("%d ",arr[i]);

	printf("\n");

	return 0;
}
