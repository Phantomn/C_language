#include <stdio.h>
#include "ArrayList.h"

int main(){
	List list;
	int i;
	int data;
	int sum=0;
	ListInit(&list);

	for(i=1;i<10;i++){
		LInsert(&list, i);
	}
	printf("Present Data Count : %d\n",LCount(&list));

	if(LFirst(&list,&data)){
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ",data);
	}
	printf("\n\n");
	if(LFirst(&list,&data)){
		sum+=data;

		while(LNext(&list, &data))
			sum+=data;
		printf("Sum : %d\n",sum);
	}
	if(LFirst(&list,&data)){
		if(data%2==0 || data%3==0)
			LRemove(&list);

		while(LNext(&list, &data)){
			if(data%2==0 || data%3==0)
				LRemove(&list);
		}
	}
	if(LFirst(&list,&data)){
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ",data);
	}
	printf("\n\n");
	return 0;
}
