#include <stdio.h>

int main(){
	int a,b;
	printf("가로의 길이를 입력하세요 :");
	scanf("%d",&a);

	printf("세로의 길이를 입력하세요 :");
	scanf("%d",&b);

	printf("직사각형의 넓이는 %d 입니다\n",a*b);

	return 0;
}
