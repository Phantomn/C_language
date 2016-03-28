#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int arr;
	//printf("input arr : ");
	scanf("%d",&arr);
	//__fpurge(stdin);
	//int* p1=(int*)malloc(arr);
	while(arr<3 && arr>1023){
		//free(p1);
		scanf("%d",&arr);
		__fpurge(stdin);
	}
	//printf("Input str : ");
	char str[1023];
	gets(str);
	char* ptr=NULL;
	char* tok[1023]={NULL,};
	int i=1;
	int j;
	int cnt=1;
	int num[1023]={0,};
	int temp;
	int mid;

	ptr=strtok(str, " ");
	tok[0]=ptr;
	num[0]=atoi(tok[0]);
	//printf("%d ",num[0]);
	while(ptr=strtok(NULL, " ")){
		tok[i]=ptr;
		num[i]=atoi(tok[i]);
		//printf("%d ",num[i]);
		cnt++;
		i++;
	}
	//printf("\n");
	//printf("%d\n",cnt);

	for(i=0;i<cnt;i++){
		for(j=i+1;j<cnt;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	/*for(i=0;i<cnt;i++)
		printf("%d ",num[i]);*/
	//printf("\n");
		mid=cnt/2;
	//printf("%d\n",mid);
	printf("%d",num[mid]);

	return 0;
}
