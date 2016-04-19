#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	int *old;
	int price=0;
	int i;


	scanf("%d",&n);

	old = malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		scanf("%d",&old[i]);
	}

	for(i=0;i<n;i++){
		if(old[i]<=6 || old[i]>=70)
			price+=0;
		else
			price += 3000;
	}
	printf("All Price : %d\n",price);

	return 0;
}