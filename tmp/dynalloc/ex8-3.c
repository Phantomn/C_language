#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,j;
	int* ip=NULL;
	char* cp=NULL;
	float* fp=NULL;


	printf("need mem space : ");
	scanf("%d",&i);
	printf("saved data type (1)int, (2)char, (3)float : ");
	scanf("%d",&j);

	if(j==1){
		ip=(int*)calloc(i,sizeof(int));
		printf("mem start address : %x\n",ip);
		printf("allocated mem space : %dByte\n",i*sizeof(int));
	}
	else if(j==2){
		cp=(char*)calloc(i,sizeof(char));
		printf("mem start address : %x\n",cp);
		printf("allocated mem space : %dByte\n",i*sizeof(char));
	}
	else if(j==3){
		fp=(float*)calloc(i,sizeof(float));
		printf("mem start address : %x\n",fp);
		printf("allocated mem space : %dByte\n",i*sizeof(float));
	}
	else
		printf("Input error\n");
}
