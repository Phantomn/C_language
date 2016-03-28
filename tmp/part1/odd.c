#include <stdio.h>

int main(){
	int i;

	for(i=1;i<=100;i++){
		if(i%2==0)
			continue;
		else
			printf("%d ",i);
	}
	printf("\n");

	return 0;
}
