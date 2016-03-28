#include <stdio.h>
#include <string.h>

int main(){
	char arr[50];
	int n1=100;
	double n2=3.14;
	char str[50]="good-morning";

	printf("%d %lf %s\n",n1,n2,str);
	sprintf(arr,"%d %lf %s\n",n1,n2,str);
	printf("%s\n",arr);

	return 0;
}
