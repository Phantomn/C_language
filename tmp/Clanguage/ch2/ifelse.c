#include <stdio.h>

void main(){
	int score;
	
	scanf("%d",&score);

	if(score>=90)
		printf("A\n");
	else if (score>=80 && score < 90)
		printf("B\n");
	else
		printf("C\n");
}
