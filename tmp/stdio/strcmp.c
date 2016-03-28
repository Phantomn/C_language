#include <stdio.h>
#include <string.h>

int main(){
	char arr1[20]="Good-morning";
	char arr2[20]="Good-afternoon";
	char arr3[20]="Good-evening";
	int result[3];
	int i;
	int n1,n2,n3;
	
	result[0]=strcmp(arr1,arr2);
	result[1]=strncmp(arr1,arr2,5);
	result[2]=strcmp(arr2,arr3);

			
	printf("%d %d %d",strlen(arr1),strlen(arr2),strlen(arr3));
	printf("\n");
	for(i=0;i<3;i++)
		printf("%d ",result[i]);
	printf("\n");

	return 0;
}
