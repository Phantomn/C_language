#include <stdio.h>

typedef struct node{
	int num;
	struct node* le_ln;
	struct node* ri_ln;
}NODE;

int main(){
	NODE n[8];
	int i;

	for(i=0;i<8;i++){
		printf("%d's Input num : ",i+1);
		scanf("%d",&n[i].num);
		n[i].le_ln=NULL;
		n[i].ri_ln=NULL;
	}
	n[0].le_ln=&n[1];
	n[0].ri_ln=&n[2];
	n[1].le_ln=&n[3];
	n[1].ri_ln=&n[4];
	n[2].le_ln=&n[5];
	n[2].ri_ln=&n[6];
	
	for(i=0;i<8;i++){
		if(n[i].le_ln!=NULL && n[i].ri_ln!=NULL)
			printf("%d %d %d\n",n[i].num,n[i].le_ln->num,n[i].ri_ln->num);
		if(n[i].le_ln==NULL)
			printf("%d's left link is NULL\n",i+1);
		if(n[i].ri_ln==NULL)
			printf("%d's right link is NULL\n",i+1);
	}
	return 0;
}
