#include <stdio.h>
int sqrt(int n){
	return n*n;
}
int main(){
	int num;
	int min;
	int max;
	int comp1, comp2;
	int i;

	scanf("%d",&num);

	if(num>0){
		for(i=1;i<num;i++){
			min=sqrt(i);
			max=sqrt(i+1);
			if(num>=min && num<=max){
				comp1=num-min;
				comp2=max-num;
				if(comp1<comp2){
					printf("%d",min);
					return 0;
				}
				else{
					printf("%d",max);
					return 0;
				}
			}
		}
	}
}
