#include <stdio.h>

int main(){
	int i, j;


	printf("Q1.\n");
	for(i=1;i<5;i++)
		printf("*");
	printf("\n\n");

	printf("Q2.\n");
	for(i=0;i<5;i++)
		printf("*\n");
	printf("\n");

	printf("Q3.\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	printf("Q4.\n");
	for(i=1;i<=5;i++){
		for(j=0;j<5;j++)
			printf("%d",i);
		printf("\n");
	}
	printf("\n");

	printf("Q5.\n");
	for(i=0;i<5;i++){
		for(j=1;j<=5;j++)
			printf("%d",j);
		printf("\n");
	}
	printf("\n");

	printf("Q6.\n");
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++)
			printf("%d",j);
		printf("\n");
	}
	printf("\n");

	printf("Q7.\n");
	for(i=5;i>=1;i--){
		for(j=i;j<i+5;j++)
			printf("%d",j);
		printf("\n");
	}
	printf("\n");

	printf("Q8.\n");
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	printf("Q9.\n");
	for(i=5;i>0;i--){
		for(j=i;j>0;j--)
			printf("*");
		printf("\n");
	}
	printf("\n");

	printf("Q10.\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i<j+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("Q11.\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i<j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n");



	return 0;
}