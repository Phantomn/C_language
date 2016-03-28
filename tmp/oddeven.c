#include <stdio.h>

int main(){
	int n;
	int h;
	int d;
	int o;
	printf("Input Number : ");
	scanf("%d",&n);

	h = n/100;
	d = (n%100)/10;
	o = (n%100)%10;

	if(h%2==0)
		printf("%d : 짝수 ",h);
	else
		printf("%d : 홀수 ",h);
	if(d%2==0)
		printf("%d : 짝수 ",d);
	else
		printf("%d : 홀수 ",d);
	if(o%2==0)
		printf("%d : 짝수 ",o);
	else
		printf("%d : 홀수 ",o);
	printf("\n");


	return 0;
}
