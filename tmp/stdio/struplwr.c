#include <stdio.h>
#include <string.h>

int main(){
	char arr1[50]="good-morning,good-afternoon,good-evening";
	char arr2[50]="GOOD-MORNING,GOOD-AFTERNOON,GOOD-EVENING";
	char* p1=NULL;
	char* p2=NULL;

	p1=strupr(arr1);
	p2=strlwr(arr2);

	puts(p1);
	puts(p2);

	return 0;
}
