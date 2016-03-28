#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

void main(){
	int i;
	printf("need to mem space : ");
	scanf("%d",&i);
	allocate(i);
}
void allocate(int i){
	int* p=(int*)malloc(i);
	printf("%d's space allocate\n",i);
}
