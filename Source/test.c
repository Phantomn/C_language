#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	int* arr_int;

	int i, j, temp;

	scanf("%d", &len);
	arr_int = (int*)malloc(len*sizeof(int));
	for(i=0; i<len; i++){
		scanf("%d", &arr_int[i]);
	}

	for(i=0; i<len; i++){
		for(j=i+1; j<len; j++){
			if(arr_int[j] > arr_int[j+1]){
				temp = arr_int[j];
				arr_int[j] = arr_int[j+1];
				arr_int[j+1] = temp;
			}
		}
	}

	printf("%d", arr_int[(len/2)+1]);

	return 0;
}
