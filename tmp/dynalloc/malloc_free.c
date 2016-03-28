#include <stdio.h>
#include <stdlib.h>

int main(){
	int* p=NULL;
	p=(int*)malloc(4);

	if(p==NULL)
		printf("malloc fail\n");

	*p=10;
	printf("address : %x\n",p);
	printf("value : %d\n",*p);


	free(p);
	p=NULL;

	return 0;
}
