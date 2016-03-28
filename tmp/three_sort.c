#include <stdio.h>
void three_sort(int arr[]);
int main(){
	int arr[3];

	printf("세 수를 입력하세요 : ");
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	three_sort(arr);

	return 0;
}
void three_sort(int arr[]){
	int i,j;
	int temp;
	arr[3]=0;

	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(arr[i] > arr[j]){	
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("%d %d %d\n",arr[0],arr[1],arr[2]);
}
