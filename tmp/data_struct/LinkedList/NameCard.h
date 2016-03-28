#ifndef __NAMECARD_H__
#define __NAMECARD_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"

#define NAME_LEN	30
#define PHONE_LEN	30

typedef struct __namecard{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
}NameCard;


NameCard * MakeNameCard(char *name, char *phone){
	NameCard *newcard = (NameCard *)malloc(sizeof(NameCard));
	strcpy(newcard->name,name);
	strcpy(newcard->phone,phone);
	return newcard;
}
void ShowNameCardInfo(NameCard *pcard){
	printf("Name : %s, Phone : %s\n",pcard->name, pcard->phone);
	printf("\n\n");
}
int NameCompare(NameCard *pcard, char *name){
	return	strcmp(pcard->name,name);
}
void ChangePhoneNum(NameCard *pcard, char *phone){
	strcpy(pcard->phone,phone);
}
#endif
