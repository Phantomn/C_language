#include <stdio.h>
#include <stdlib.h>

int main(){
	int row;
	int i,j;
	scanf("%d",&row);
	int **m = malloc(sizeof(int)*row);

	for(i=0;i<row;i++){
		m[i]=malloc(sizeof(int)*row);
		memset(m[i],0,sizeof(int)*row);
	}
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			if(i==j){
				m[i][j]=1;
			}
			else
				m[i][j]=0;
		}
	}

	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		free(m[i]);
	}
}