#include <stdio.h>

void* add(int a,int b);
void* sub(int a,int b);
void* mul(int a,int b);
void* div(int a,int b);

int main(){
	int a, b;
	int result;
	printf("숫자를 입력하세요 : ");
	scanf("%d %d",&a,&b);

	printf("%d + %d = %d\n",a,b,add(a,b));
	printf("%d - %d = %d\n",a,b,sub(a,b));
	printf("%d * %d = %d\n",a,b,mul(a,b));
	printf("%d / %d = %d\n",a,b,div(a,b));

	return 0;
}

void* add(int a,int b){
	void* num1=NULL;
	void* num2=NULL;
	num1=&a;
	num2=&b;
	return *(int*)num1 + *(int*)num2;
}
void* sub(int a,int b){
	void* num1=NULL;
	void* num2=NULL;
	num1=&a;
	num2=&b;
	return *(int*)num1 - *(int*)num2;
}
void* mul(int a,int b){
	void* num1=NULL;
	void* num2=NULL;
	num1=&a;
	num2=&b;
	return *(int*)num1 * *(int*)num2;
}
void* div(int a,int b){
	void* num1=NULL;
	void* num2=NULL;
	num1=&a;
	num2=&b;
	return *(int*)num1 / *(int*)num2;
}
