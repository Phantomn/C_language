#include <stdio.h>

int main(){
	int n;
	int num[4];
	int a=0,b=0,c=0;
	int i;
	scanf("%d",&n);

	num[0] = n/100;
	num[1] = (n%100)/10;
	num[2] = (n%100)%10;

	for(a=0;a<=10;a++){
		for(b=0;b<=10;b++){
			for(c=0;c<=10;c++){
				if(a+c == num[0] && b+a == num[1] && c+b==num[2])
					printf("a=%d, b=%d, c=%d\n",a,b,c);
			}
		}
	}
												// 부르트포싱

	return 0;
}