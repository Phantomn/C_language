#include <stdio.h>

int add(int a, int b);
void count();
int c=0;
int main(){
	int x, y;
	int i;
	int result;

	for(i=0;i<100;i++){
		printf("Input : ");
		scanf("%d %d",&x,&y);
		if(x==0&&y==0){
			printf("All add result : %d\n",c);
			return 0;
		}

		result=add(x,y);
		printf("add result : %d\n",result);
	}
	return 0;
}
int add(int a,int b){
	count();
	return a+b;
}
void count(){
	c++;
}
