#include <stdio.h>
#include <stdlib.h>
int GetOpPrec(char op);
int WhoPrecOp(char op1, char op2);

int main(){
	char str[100]={0,};
	int num[100]={0,};
	char op[100]={0,};
	int i=0;
	int priority=0;
	char temp;

	do{
		scanf("%c",str[i]);

		if(!(48 <= str[i] || str[i] <= 57)){
			op[i]=str[i];
		}
		else{
			num[i]=str[i];
		}
		if(WhoPrecOp(op[i],op[2])>1)


		
	while(str[i]==\x43 || str[i]==\x45 || str[i]==\x42 || str[i]==\x47 || (48 <= str[i] && str[i] <= 57)){
	}
	}
}
int WhoPrecOp(char op1, char op2){
	int op1Prec=GetOpPrec(op1);
	int op2Prec=GetOpPrec(op2);

	if(op1Prec > op2Prec)
		return 1;
	else if(op1Prec < op2Prec)
		return -1;
	else
		return 0;
}

int GetOpPrec(char op){
	switch(op){
		case '!':
		case '^':
		case '$':
			return 7;
		case '*':
		case '/':
			return 5;
		case '+':
		case '-':
			return 3;
		case '(':
			return 1;
		case '%':
			return -3;
	}
	return -1;
}
