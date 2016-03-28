#include <stdio.h>

int main(){
	int a[3];

	int i;

	for(i=0;i<3;i++){
		printf("Input : ");
		scanf("%d",&a[i]);
	}

	if(a[0]>a[1]){
		if(a[0]>a[2])
			printf("result : %d\n",a[0]);
		else if(a[2]>a[1]){
			printf("result : %d\n",a[2]);
			return 0;
		}
	}
	else if(a[1]>a[2])
		printf("result : %d\n",a[1]);

	return 0;
}
