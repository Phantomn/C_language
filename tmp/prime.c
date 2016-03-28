#include <stdio.h>

int main(){
	int i;

	printf("%d %d ",2, 3);
	for(i=1;i<=100;i++){
		if(i==1)
			continue;
		if(i%2!=0&& i%3!=0)
			printf("%d ",i);
	}
	printf("\n");

	return 0;
}
