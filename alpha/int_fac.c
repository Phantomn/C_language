#include <stdio.h>

int main(){
	int num;
	int i=0;
	int prime[100]={0,};
	int count = 0;
	int two = 0, thr = 0, five = 0, sev = 0;
	scanf("%d",&num);

	while(num!=1){
		if(num%2==0){
			prime[0]+=1;
			num/=2;
		}
		else if(num%3==0){
			prime[1]+=1;
			num/=3;
			thr++;
		}
		else if(num%5==0){
			prime[2]+=1;
			num/=5;
			five++;
		}
		else if(num%7==0){
			prime[3]+=1;
			num/=7;
			sev++;
		}
		else
			break;
	}
	for(i=0;i<4;i++){
		if(i==0){
			//printf("2 : %d\n",prime[i]);
			if(prime[i]>=2)
				printf("2^%d",prime[0]);
			else if(prime[i]==1)
				printf("2");
		}
		else if(i==1){
			//printf("3 : %d\n",prime[i]);
			if(prime[i]>=2)
				printf("3^%d",prime[1]);
			else if(prime[i]==1)
				printf("3");
		}
		else if(i==2){
			//printf("5 : %d\n",prime[i]);
			if(prime[i]>=2)
				printf("5^%d",prime[2]);
			else if(prime[i]==1)
				printf("5");
		}
		else if(i==3){
			//printf("7 : %d\n",prime[i]);
			if(prime[i]>=2)
				printf("7^%d",prime[3]);
			else if(prime[i]==1)
				printf("7");
		}
		if(i<4 && prime[i+1]!=0)
			printf(" x ");
	}
	if(num!=1)
		printf(" x ");
	while(num!=1){
		if(num%11==0){
			printf("%d",11);
			num/=11;
		}
		else if(num%13==0){
			printf("%d",13);
			num/=13;
		}
		else if(num%17==0){
			printf("%d",17);
			num/=17;
		}
		else if(num%19==0){
			printf("%d",19);
			num/=19;
		}
		else{
			printf("%d",num);
			num/=num;
		}
		if(num!=1)
			printf(" x ");
	}
	printf("\n");
	return 0;
}