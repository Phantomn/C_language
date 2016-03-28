#include <stdio.h>

int main(){
	int apart[3][3];
	int i,j;
	int sum=0;


	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d F %d : ",i+1,j+1);
			scanf("%d",&apart[i][j]);
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum+=apart[i][j];
		}
	}
	printf("all people is %d\n",sum);

	return 0;
}
