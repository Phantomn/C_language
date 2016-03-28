#include <stdio.h>

int square(int n);
int cube(int n);
int quartic(int n);
int quintic(int n);

int main(){
	int i;
	char integer[]="INTEGER";
	char squ[]="SQUARE";
	char cub[]="CUBE"; 
	char quar[]="QUARTIC";
	char quin[]="QUINTIC";
	int sq;
	int cu;
	int qua;
	int qui;

	printf("A TABLE OF POWERS\n");
	printf("------------------------------------------------------------------------------\n");
	printf("   %8s\t%8s\t%8s\t%8s\t%8s\n",integer,squ,cub,quar,quin);
	printf("------------------------------------------------------------------------------\n");
	for(i=1;i<=50;i++){
		sq=square(i);
		cu=cube(i);
		qua=quartic(i);
		qui=quintic(i);
		printf("%8d\t%8d\t%8d\t%8d\t%8d\n",i,sq,cu,qua,qui);
	}
	printf("------------------------------------------------------------------------------\n");
	return 0;
}
int square(int n){
	return n*n;
}
int cube(int n){
	return square(n)*n;
}
int quartic(int n){
	return cube(n)*n;
}
int quintic(int n){
	return quartic(n)*n;
}
