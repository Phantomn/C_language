#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int age;
	char addr[100];
} Person;

int main(){
	Person *p1 = malloc(sizeof(Person));

	strcpt(p1->name, "Phantom");
	p1->age = 30;
	strcpy(p1->addr, "Cheonan CityHall");

	printf("name : %s\n",p1->name);
	printf("age : %d\n",p1->age);
	printf("addr : %s\n",p1->addr);

	free(p1);

	return 0;
}