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
				case 9 : printf("%d억",han[i]); break;
				case 8 : printf("%d천만",han[i]); break;
				case 7 : printf("%d백만",han[i]); break;
				case 6 : printf("%d십만",han[i]); break;
				case 5 : printf("%d만",han[i]); break;
				case 4 : printf("%d천",han[i]); break;
				case 3 : printf("%d백",han[i]); break;
				case 2 : printf("%d십",han[i]); break;
				case 1 : if(han[i]==9)
						 printf("구");
					else if(han[i]==8)
						printf("팔");
					else if(han[i]==7)
						printf("칠");
					else if(han[i]==6)
						printf("육");
					else if(han[i]==5)
						printf("오");
					else if(han[i]==4)
						printf("사");
					else if(han[i]==3)
						printf("삼");
					else if(han[i]==2)
						printf("이");
					else
						printf("일");
					 break;
			}
		}
	}
	return 0;
}
