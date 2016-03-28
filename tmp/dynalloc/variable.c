#include <stdio.h>

void add(int num, ...);

int main(){
	int a=10,b=20,c=30;

	add(1,a);
	add(2,a,b);
	add(3,a,b,c);

	return 0;
}
void add(int num, ...){
	int* p=NULL;
	p=&num+1;

	printf("%x %d\n",p,*p);
	if(num==1)
		printf("%d\n",p[0]);
	else if(num==2)
		printf("%d \n",p[0]+p[1]);
	else
		printf("%d \n",p[0]+p[1]+p[2]);
}
