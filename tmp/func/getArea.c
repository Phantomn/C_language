#include <stdio.h>

int getArea(int x,int y);

int main(){
	int a, b;
	int area;
	printf("밑변 길이 : ");
	scanf("%d",&a);
	printf("높이 : ");
	scanf("%d",&b);

	area=getArea(a,b);
	printf("사각형의 넓이는 %d 입니다.\n",area);

	return 0;
}
int getArea(int x,int y){
	if(x>0&&y>0)
		return x*y;
	else{
		printf("error\n");
		exit(0);
	}
}
