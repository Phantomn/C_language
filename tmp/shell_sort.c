#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(){
	srand(time(NULL));
	rand();rand();rand();
	srand(rand());
	int array[N], i, j , k, gap, temp;

	for(i=0;i<N;i++)
		array[i]=rand()%32767;

	gap=N/2;
	while(gap>0){
		for(k=0;k<gap;k++){
			for(i=k+gap;i<N;i+=gap){
				for(j=i-gap;j>=k;j-=gap){
					if(array[j] > array[j+gap]){
						temp = array[j];
						array[j] = array[j+gap];
						array[j+gap] = temp;
					}
					else
						break;
				}
			}
		}
		gap = gap/2;

	}

	for(i=0;i<N;i++){
		printf("%8d ", array[i]);
		if(i%10==9)
			printf("\n");
	}
	return 0;
}
