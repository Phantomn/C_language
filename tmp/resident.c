#include <stdio.h>
int resident(int k, int n);
void main(){
	int result=0;
	int k;
	int n;

	printf("층 수를 입력 하세요 : ");
	scanf("%d",&k);
	printf("호 수를 입력 하세요 : ");
	scanf("%d",&n);


	result=resident(k,n);
	printf("%d 층 %d 호에는 %d 명이 삽니다\n",k,n,result);

}
int resident(int k, int n){
	int result=0;

	if(k==0)
		return n;
	else if((k >= 1 && k <= 14) && (n >= 1 && n <= 14)){
		for(;n>0;n--)
			result+=resident((k-1),n);
	}
	else{
		printf("error");
		exit(0);
	}
	return result;
}

