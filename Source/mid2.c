#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int arr;
	scanf("%d",&arr);
	int* p1=(int*)malloc(arr*sizeof(int));
	int i,j,temp,mid;
	for(i=0;i<arr;i++)
		scanf("%d",&p1[i]);
	for(i=0;i<arr;i++){
		for(j=i+1;j<arr;j++){
			if(p1[i]>p1[j]){
				temp=p1[i];
				p1[i]=p1[j];
				p1[j]=temp;
			}
		}
	}
	mid=arr/2;
	printf("%d",p1[mid]);
	free(p1);

	return 0;
}
