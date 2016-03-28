#include <stdio.h>

int main(){
	int a,b;

	printf("Input Number : ");
	scanf("%d %d",&a,&b);

	if(a>b)
		printf("Big Number : %d\n",a);
	else if(a<b)
		printf("Big Number : %d\n",b);
	else
		printf("Same Number\n");

	return 0;
}
