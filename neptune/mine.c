#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int m,n;

	printf("Input matrix size\n");
	scanf("%d %d",&m,&n);

	char **matrix = malloc(sizeof(char *)*m);

	for(i=0;i<m;i++){
		matrix[i]=malloc(sizeof(char)*n);
	}
	printf("%d %d\n",sizeof(char)*m, sizeof(char)*n);
	printf("Input mine\n");
	for(i=0;i<m;i++){
		scanf("%s",matrix[i]);
	}
	printf("====== Result ======\n");

	for(i=0;i<m;i++){
		printf("%s\n",matrix[i]);
	}

	for(i=0;i<m;i++){
		free(matrix[i]);
	}
	free(matrix);
	return 0;
}