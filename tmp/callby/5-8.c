#include <stdio.h>

int* func();
int main(){
	int* p=NULL;
	p=func();
	int i;

	for(i=0;i<4;i++)
		printf("%d ", p[i]);
	printf("\n");
	for(i=0;i<4;i++)
		printf("%d ",*(p+i));
	printf("\n");

	return 0;
}

int* func(){
	static	int array[]={10,20,30,40};
	return array;
}
