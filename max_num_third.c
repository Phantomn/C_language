#include <stdio.h>

int main(){
	int a1, a2, a3;
	int result;

	scanf("%d %d %d", &a1, &a2, &a3);

	result = (a1 > a2) ? a1 : (a2 > a3 ? a2 : a3);
	//result = (a1 > a2) ? ((a1 > a3) ? a1 : a3) : ((a2 > a3) ? a2 : a3);
	//result = (result>a3) ? result : a3;

	printf("%d\n",result);

	return 0;
}
