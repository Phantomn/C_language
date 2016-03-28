#include <stdio.h>

int main(){

	int array[2][3]={10,20,30,40,50,60};

	int (*p)[3]=NULL;
	// 1.declaratives of arr pointer variable
	

	p=array;
	// 2.reset of arr pointer variable
	printf("%d %d %d\n",p[0][0],p[0][1],p[0][2]);
	printf("%d %d %d\n",p[1][0],p[1][1],p[1][2]);


	return 0;
}
