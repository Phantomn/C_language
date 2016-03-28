#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	int age;
	char addr[100];
} Person;

int main(){
	Person p1;

	strcpy(p1.name, "Phantom");
	p1.age = 30;
	strcpy(p1.addr, "Cheonan");

	printf("name : %s\n",p1.name);
	printf("age : %d\n",p1.age);
	printf("addr : %s\n",p1.addr);

	return 0;
}