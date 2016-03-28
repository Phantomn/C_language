#include <stdio.h>

typedef enum{false, true} bool;

int main(void){
	bool myTest = true;
	if(myTest) puts("논리값이 true 라면 이 줄이 출력됩니다.");

	myTest = false;

	if(myTest) puts("논리값이 false라면 이줄이 출렫되지 않습니다.");
	if(!myTest) puts("느낌표로 값을 뒤집어주면 이 줄이 출력됩니다.");

	return 0;
}
