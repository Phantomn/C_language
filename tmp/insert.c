#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include  <time.h>
#define N 100

int main(){
	srand(time(NULL));
	rand();rand();rand();
	srand(rand());
	int a[N], i, j ,temp;

	for(i=0;i<N;i++)
		a[i]=rand()%32767;

	for(i=1;i<N;i++){
		for(j=i-1;j>=0;j--){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else
				break;
		}
	}
	for(i=0;i<N;i++){
		printf("%8d ",a[i]);
		if(i%10==9)
			printf("\n");
	}
	return 0;
}
