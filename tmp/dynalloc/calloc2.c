#include <stdio.h>
#include <stdlib.h>

int main(){
	int* p1=(int*)calloc(1,sizeof(int));
	int* p2=(int*)malloc(4);

	printf("p1 value : %d\n",*p1);
	printf("p2 value : %d\n",*p2);


	free(p1);
	p1=NULL;

	free(p2);
	p2=NULL;


	return 0;
}
