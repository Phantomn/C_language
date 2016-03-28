#include <stdio.h>
#include <string.h>

int main(){
	char arr[50]="100	3.14	good-morning";
	int n1;
	double n2;
	char str[50];

	//scanf("%d %lf %s", &n1,&n2,str);
	sscanf(arr, "%d %lf %s",&n1,&n2,str);

	puts("출력");
	printf("%d %lf %s\n",n1,n2,str);

	return 0;
}
