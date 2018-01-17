'''#include <stdio.h>

int main(){
	int var;
	printf("단 수를 입력하세요.\n");
	scanf("%d",&var);
	int ebp_0x4 = var;
	int eax = var;
	if(ebp_0x4<=eax)
		int ebp_0x8 = 1;
	if(ebp_0x8 <= 9){
		eax = ebp_0x4;
		eax = eax * ebp_0x8;
		printf("%d * %d = %d\n", ebp_0x4, ebp_0x8, eax);
		ebp_0x8 += 1;
		//goto cmp ebp_0x8, 0x9
	}
	ebp_0x4 += 1;
	//goto cmp ebp_0x4, ebp_0xc
}

#include <stdio.h>

int main(){
	int var;
	printf("단 수를 입력하세요.\n");
	scanf("%d",&var);
	int ebp_0x4 = var;
	int eax = ebp_0xc;//ebp_0xc == var
	for(ebp_0x4=var;ebp_0x4<=ebp_0xc;ebp_0x4++){
		for(ebp_0x8=1;ebp_0x8<=9;ebp_0x8++){
			eax = ebp_0x4;
			eax = eax * ebp_0x8;
			printf("%d * %d = %d\n", ebp_0x4, ebp_0x8, eax);
		}
	}
	return 0;
}
#include <stdio.h>

void main(){
	int dan;
	int i=1;
	int j=1;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &dan);

	while(i<=dan){
		while(j<=9){
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}
}
#include <stdio.h>

void main(){
	int ebp_0x4 = 1;
	int ebp_0x8 = 1;
	int ebp_0xc;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &ebp_0xc);
	int eax;

	ebp_0x4 = ebp_0xc;
	if(ebp_0x4 <= eax){
		if(ebp_0x8 <= 9){
			eax = ebp_0x4;
			eax = eax * ebp_0x8;
			printf("%d * %d = %d\n",ebp_0x4, ebp_0x8, eax);
			ebp_0x8++;
		}//goto cmp ebp_0x8
		ebp_0x4++;
		ebp_0x4 = ebp_0xc;
	}//goto cmp ebp_0x4
}
#include <stdio.h>

void main(){
	int ebp_0x4 = 1;
	int ebp_0x8 = 1;
	int ebp_0xc;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &ebp_0xc);
	int eax;

	ebp_0x4 = ebp_0xc;
	while(ebp_0x4 <= ebp_0xc){
		while(ebp_0x8 <= 9){
			eax = ebp_0x4;
			eax = eax * ebp_0x8;
			printf("%d * %d = %d\n",ebp_0x4, ebp_0x8, eax);
			ebp_0x8++;
		}//goto cmp ebp_0x8
		ebp_0x4++;
	}//goto cmp ebp_0x4
}
#include <stdio.h>

void main(){
	int dan;
	int i=1;
	int j=1;
	printf("단 수를 입력하세요.\n");
	scanf("%d", &dan);
	i = dan;
	do{
		do{
			printf("%d * %d = %d\n", i,j,i*j);
			j++;
		}while(j<=9);
		i++;
	}while(i<=dan);
}

#include <stdio.h>

void main(){
	int ebp_0x4 = 1;
	int ebp_0x8 = 1;
	printf("단 수를 입력하세요.\n");
	int ebp_0xc;
	scanf("%d", &ebp_0xc);

	ebp_0x4 = ebp_0xc;
	Label1: int eax = ebp_0x4;
	eax = eax * ebp_0x8;
	printf("%d * %d = %d\n",ebp_0x4, ebp_0x8, eax);

	ebp_0x8++;
	if(ebp_0x8 <= 9)
		goto Label1;
	ebp_0x4++;
	if(ebp_0x4 <= ebp_0xc)
		goto Label1;
}'''
#include <stdio.h>

void main(){
	int ebp_0x4 = 1;
	int ebp_0x8 = 1;
	printf("단 수를 입력하세요.\n");
	int ebp_0xc;
	scanf("%d", &ebp_0xc);

	ebp_0x4 = ebp_0xc;
	do{
		do{
			Label1: int eax = ebp_0x4;
			eax = eax * ebp_0x8;
			printf("%d * %d = %d\n",ebp_0x4, ebp_0x8, eax);

			ebp_0x8++;
		}while(ebp_0x8 <= 9);
			ebp_0x4++;
	}while(ebp_0x4 <= ebp_0xc);
}
