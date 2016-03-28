#include <stdio.h>

int main(){
	int array[5]={10,20,30,40,50};
	int i;
	int* p=NULL; 	// 1.declaratives of pointer variable
	
	p=array;	// 2.reset of pointer variable

	
	for(i=0;i<5;i++)
		printf("%d ",p[i]);
	printf("\n");


	for(i=0;i<5;i++)
		printf("%d ",*(p+i));
	printf("\n");

	return 0;
}
