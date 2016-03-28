#include <stdio.h>

int main(){
	int n, k;

	printf("두 수를 입력하세요 : ");
	scanf("%d %d",&n,&k);
	int i;

	for(i=0;n>=i*i;i++){
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
	}
	printf("%d\n",n);
	for(i=0;k>=i*i;i++){
		if((k%2)==0){
			printf("2*");
			k/=2;
			continue;
		}
		if((k%3)==0){
			printf("3*");
			k/=3;
			continue;
		}
	}
	printf("%d\n",k);
}
