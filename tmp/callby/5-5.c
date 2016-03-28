#include <stdio.h>

void func(int* p);

int main(){
	int array[2][4]={10,20,30,40,50,60,70,80};
	func(array);
	return 0;
}

void func(int* p){
	int i;

	for(i=0;i<8;i++)
		printf("%d ",p[i]);
	printf("\n");

}
