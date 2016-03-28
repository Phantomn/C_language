#include <stdio.h>

void func(int* p, int num);

int main(){
	int array[8]={1,2,3,4,5,6,7,8};

	func(array, sizeof(array)/sizeof(int));
	return 0;
}
void func(int* p, int num){
	int i,j;
	int temp=0;

	for(i=0;i<num;i++){
		if(i==0)
			temp=p[7];
		p[7-i]=p[6-i];

		if(i==7)
			p[0]=temp;
	}

		
	for(i=0;i<num;i++)
		printf("%d ",p[i]);
	printf("\n");
}
