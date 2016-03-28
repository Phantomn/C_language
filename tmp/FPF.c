#include <stdio.h>

int main(){
	int n;

	int i;
	printf("n을 입력하세요 : ");
	scanf("%d",&n);

	for(i=0;n>i*i;i++){
		if((n%2)==0){
			printf("2*");
			n/=2;
			continue;
		}
		if((n%3)==0){
			printf("3*");
			n/=3;
			continue;
		}
		if((n%5)==0){
			printf("5*");
			n/=5;
			continue;
		}
	}
		printf("%d\n",n);
}
