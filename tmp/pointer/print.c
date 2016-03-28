#include <stdio.h>
void arrInput(int *arr[], int n);
int main(){
	int array[5]={10,20,30,40,50};
	int (*pfunc)(int *arr[], int n);


	pfunc=arrInput;
	pfunc(array,5);

	return 0;
}
void arrInput(int *arr[], int n){
	int i;

	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
