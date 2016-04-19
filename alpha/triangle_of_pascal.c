#include <stdio.h>

void pascal(int n){
	int i,j;
	for(j=n;j<n/2+1;j++)
		printf("\t");
	if(n==1)
		printf("1");
	else
}
int main(){
	int i,j;
	int n;

	printf("Input height : ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		pascal(i);
	}
}