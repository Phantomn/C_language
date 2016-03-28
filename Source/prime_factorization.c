#include <stdio.h>

int main(){
	int num;
	int i;
	int prime[100]={0,};
	int count = 0;
	int two = 0, thr = 0, five = 0, sev = 0;
	scanf("%d",&num);

	while(num!=1){
		if(num%2==0){
			printf("%d ",2);
			num/=2;
			two++;
		}
		else if(num%3==0){
			printf("%d ",3);
			num/=3;
			thr++;
		}
		else if(num%5==0){
			printf("%d ",5);
			num/=5;
			five++;
		}
		else if(num%7==0){
			printf("%d ",7);
			num/=7;
			sev++;
		}
		else{
			printf("%d ",num);
			num/=num;
		}
	}
	printf("\n");
	return 0;
}