#include <stdio.h>

int plus(int i, int j);
int minus(int i, int j);
int mult(int i, int j);
float divide(int i, int j);


int main(){
	int a,b;
	int result;
	double result2;

	printf("Input two : ");
	scanf("%d %d",&a,&b);

	result=plus(a,b);
	printf("a + b = %d\n",result);

	result=minus(a,b);
	printf("a - b = %d\n",result);

	result=mult(a,b);
	printf("a * b = %d\n",result);

	result2=divide(a,b);
	printf("a / b = %.2lf\n",result2);

	return 0;
}
int plus(int i, int j){
	return i+j;
}
int minus(int i, int j){
	return i-j;
}
int mult(int i, int j){
	return i*j;
}
float divide(int i, int j){
	return (float)i/j;
}
