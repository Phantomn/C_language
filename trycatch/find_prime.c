#include <stdio.h>

int main(){
	int i;
	int count=0;

	for(i=2;i<100;i++){
		if(i==2||i==3||i==5||i==7){
			printf("%d ",i);
			count++;
			if(count%5==0)
			printf("\n");
		}
		else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
			printf("%d ",i);
			count++;
			if(count%5==0)
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}