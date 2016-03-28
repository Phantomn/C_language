#include <stdio.h>

int main(){
	int n;

	scanf("%d",&n);
	while(n>=1200){
		n-=1200;
		printf("%d\n",n);
	}
	return 0;
}