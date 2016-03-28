#include <stdio.h>
int GCD(int n1, int n2);
int LCM(int n1, int n2);
int main(){
	int n1, n2;


	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);

	printf("최대 공약수는 %d 입니다\n", GCD(n1,n2));
	printf("최소 공배수는 %d 입니다\n", LCM(n1,n2));
	
	return 0;
}
int GCD(int n1, int n2){

	if(n2==0)
		return n1;
	return GCD(n2,n1%n2);
}

int LCM(int n1, int n2){
	return n1 * n2 / GCD(n1,n2);
}
