#include <stdio.h>

void calc(int x, char op, int y){
	switch (op)
	{
		case '+':
			printf("%d + %d = %d\n",x, y, x+y);
			break;
		case '-':
			printf("%d - %d = %d\n",x, y, x-y);
			break;
		case '*':
			printf("%d * %d = %d\n",x, y, x*y);
			break;
		case '/':
			printf("%d / %d = %d\n",x, y, x/y);
			break;
	}
}


void main(){
	int a,b;
	char op;
	scanf("%d %c %d",&a, &op, &b);
	calc(a,op,b);
}

