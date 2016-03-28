#include <stdio.h>

int main(){
	int fac=1;
	int n;
	int i;


	printf("Input Number : ");
	scanf("%d",&n);

	for(i=n;i>0;i--){
		fac=fac*i;
	}

	printf("%d factorial is %d\n",n,fac);

	return 0;
}
