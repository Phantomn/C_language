#include <stdio.h>

int main(){
	int age;
	char name[20];
	printf("age : ");
	scanf("%d",&age);

	fflush(stdin);
	printf("name : ");
	fgets(name,sizeof(name),stdin);

	printf("%d\n",age);
	printf("%s\n",name);

	return 0;
}
