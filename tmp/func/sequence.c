#include <stdio.h>

int alpha(char ch);

int main(){
	char al;
	int result;

	printf("Input alphabet : ");
	scanf("%c",&al);

	result=alpha(al);

	printf("Input the %c is %dst letter\n",al,result);

	return 0;
}

int alpha(char ch){
	int result;
	
	if(ch >= 65 && ch<=96)
		result = ch - 65 + 1;
	if(ch >= 97 && ch <=122)
		result = ch - 97 + 1;

	return result;
}
