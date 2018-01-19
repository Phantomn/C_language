#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int data;
	struct _node* next;
}Node;

int main(void){
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while(1){
		printf("Input Number : ");
		scanf("%d", &readData);
		if(readData < 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData; // -> == (*Struct ptr).memName
		newNode->next = NULL;

		if(head == NULL)          //if head is NULL, the first node become head
			head = newNode;
		else					  //or it isn't, next node become tail
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	printf("Print Result\n");
	if(head == NULL)
		printf("Data not exist\n");
	else
	{
		cur = head;
		printf("%d ", cur->data);

		while(cur->next != NULL){
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n");

	// memory free process
	if(head == NULL)
		return 0;
	else{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d is delete \n", head->data);
		free(delNode);

		while(delNextNode != NULL){
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d is delete \n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}