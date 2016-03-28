#include <stdio.h>

int main(){
	char c=3;
	double d=3.1;

	void* vx=NULL;

	vx=&c;
	printf("vx's address : %x\n",vx);
	printf("vx's value : %d\n",*(char*)vx);


	vx=&d;
	printf("vx's address : %x\n",vx);
	printf("vx's value : %lf\n",*(double*)vx);



	vx=&c;
	*(char*)vx=5;
	printf("saved c : %d\n",c);
	printf("vx's value : %d\n",*(char*)vx);


	vx=&d;
	*(double*)vx=5.1;
	printf("saved d : %lf\n",d);
	printf("vx's value : %lf\n",*(double*)vx);


	return 0;
}
