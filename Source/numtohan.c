#include <stdio.h>

int main(){
	int num;
	int han[9];
	int i;
	int cnt=0;
	int n;
	scanf("%d",&num);


	for(i=9;num>0;i--){
		if(num%10^i==0){
			cnt++;
			num%=10;
			continue;
		}
		else{
			han[9-cnt]=num/10^i;
			num%=10;
			cnt++;
		}
	}
	for(i=9;i>0;i--){
		if(han[i]==1){
			switch(i){
				case 9 : printf("%d��",han[i]); break;
				case 8 : printf("%dõ��",han[i]); break;
				case 7 : printf("%d�鸸",han[i]); break;
				case 6 : printf("%d�ʸ�",han[i]); break;
				case 5 : printf("%d��",han[i]); break;
				case 4 : printf("%dõ",han[i]); break;
				case 3 : printf("%d��",han[i]); break;
				case 2 : printf("%d��",han[i]); break;
				case 1 : if(han[i]==9)
						 printf("��");
					else if(han[i]==8)
						printf("��");
					else if(han[i]==7)
						printf("ĥ");
					else if(han[i]==6)
						printf("��");
					else if(han[i]==5)
						printf("��");
					else if(han[i]==4)
						printf("��");
					else if(han[i]==3)
						printf("��");
					else if(han[i]==2)
						printf("��");
					else
						printf("��");
					 break;
			}
		}
	}
	return 0;
}
