#include <stdio.h>

int main(){
	int n;

	scanf("%d",&n);

	if(n%9==7 || n%9==0)
		printf("CY");
	else
		printf("SK");

	return 0;
}
