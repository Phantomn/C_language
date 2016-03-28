#include <stdio.h>

int main(){
	int i,j;
	int n;

	printf("Input Number : ");
	scanf("%d",&n);

	for(i=n;i<=n;i++){
		for(j=0;j<10;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
	}
	return 0;
}
