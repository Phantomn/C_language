#include <stdio.h>
void swap(int* a, int* b);
int main(){
	int* a=1;
	int* b=2;

	printf("first value : %d %d\n",a,b);
	swap(&a,&b);
	printf("swap after : %d %d\n",a,b);
	return 0;
}
void swap(int* a, int* b){
	int* temp;
	temp = *a;
	a = *b;
	b = *temp;
}
