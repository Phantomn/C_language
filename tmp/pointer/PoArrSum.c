#include <stdio.h>

int main(){
	int array[5]={10,30,40,30,20};
	int* p=NULL;
	int i;
	int sum=0;

	p=array;

	for(i=0;i<5;i++){
		sum+=*(p+i);
	}

	printf("sum : %d\n",sum);

	return 0;
}
