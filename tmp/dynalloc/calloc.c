#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	int* p=(int*)calloc(sizeof(int),sizeof(int));

	if(p==NULL)
		printf("calloc fail\n");

	for(i=0;i<4;i++){
		p[i]=i;
		printf("address : %x\n",&p[i]);
		printf("value : %d\n",p[i]);
	}

	free(p);
	p=NULL;

	return 0;
}
