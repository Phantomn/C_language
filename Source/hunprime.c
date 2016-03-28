#include <stdio.h>

int main(){
	int cnt=0;
	int i;

	for(i=2;i<=100;i++){
		if(i==2 || i==3 || i==5 || i==7){
			printf("%d ",i);
			cnt++;
		}
		if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
			printf("%d ",i);
			cnt++;
		}
		if(cnt%5==0&&cnt!=0){
			cnt=0;
			printf("\n");
		}
	}
	return 0;
}
