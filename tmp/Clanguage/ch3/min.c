#include <stdio.h>

int main(){
	int arr[2]={0,};
	int result=0;
	int i;

	for(i=0;i<2;i++){
		printf("Input : ");
		scanf("%d",&arr[i]);
	}
	if(arr[0]==arr[1]){
		printf("Smaller Number : 같음\n");
		exit(0);
	}
	result = (arr[0]<arr[1]) ? arr[0] : arr[1];
	printf("Smaller Number : %d\n",result);

	return 0;
}
