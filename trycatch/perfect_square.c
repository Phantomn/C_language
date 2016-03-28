#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i;
	int num;
	int cmp1, cmp2;

	scanf("%d",&num);		//	64		75		81

	for(i=1;i<=1000;i++){
		if((i*i) < num && num < (i+1)*(i+1)){
			cmp1 = num-(i*i);
			cmp2 = ((i+1)*(i+1)) - num;

			if(cmp1 < cmp2)
				printf("%d\n",i*i);
			else
				printf("%d\n",(i+1)*(i+1));
		}
	}
	return 0;
}