#include <stdio.h>

int main(){
	int i,j=1;

	for(i=2;i<=100;i++){
		if(i==2 || i==3){
			printf("%d ",i);
			j++;
			continue;
		}
		if(i%2==0 || i%3==0)
			continue;
		else{
			printf("%d ",i);
			if(j==6){
				j=1;
				printf("\n");
			}
			j++;

		}
	}
	printf("\n");

	return 0;
}
