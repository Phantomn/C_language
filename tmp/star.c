#include <stdio.h>

void main(){

	int i;
	int j;
	int k;
	int l;

	printf("Q1.\n");
	for(i=0;i<5;i++)
		printf("*");
	printf("\n");

	printf("Q2.\n");
	for(i=0;i<5;i++){
		printf("*");
		printf("\n");
	}
	printf("\n");

	printf("Q3.\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}

	printf("Q4.\n");
	for(i=1;i<=5;i++){
		for(j=0;j<5;j++){
			printf("%d",i);
		}
		printf("\n");
	}

	printf("Q5.\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}

	printf("Q6.\n");
	for(i=1;i<=5;i++){
		for(j=i;j<=i+4;j++){
			printf("%d",j);
		}
		printf("\n");
	}

	printf("Q7.\n");
	for(i=5;i>=1;i--){
		for(j=i;j<=i+4;j++){
			if(j==10)
				continue;
			printf("%d",j);
		}
		printf("\n");
	}

	printf("Q8.\n");
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

	printf("Q9.\n");
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

	printf("Q10.\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=5;k>=i;k--)
			printf("*");
		printf("\n");
	}

	printf("Q11.\n");
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<=5;k++)
			printf("*");
		printf("\n");
	}

	printf("Q12.\n");
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=2;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

	printf("Q13.\n");
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<5;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

	printf("Q14.\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=5;k>=i;k--)
			printf("*");
		printf("\n");
	}
	for(i=4;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<=5;k++)
			printf("*");
		printf("\n");
	}

	printf("Q15.\n");
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<=5;k++)
			printf("*");
		printf("\n");
	}
	for(i=2;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=5;k>=i;k--)
			printf("*");
		printf("\n");
	}

	printf("Q16.\n");
	for(i=0;i<5;i++){
		for(j=5;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}

	printf("Q17.\n");
	for(i=4;i>=0;i--){
		for(j=5;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}

	printf("Q18.\n");
	for(i=0;i<5;i++){
		for(j=5;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}
	for(i=3;i>=0;i--){
		for(j=5;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}


}
