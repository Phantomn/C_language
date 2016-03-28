#include <stdio.h>
#include <stdlib.h>
int zero=0,one=0;
int num;
static int count=0;
int fibonacci(int n){
	if(n==0){
		count++;
		zero++;
		return 0;
	}
	else if(n==1){
		count++;
		one++;
		return 1;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int n,i;
	scanf("%d",&num);
	const int const d=num*2;
	int arr[d]={0,};
	for(i=0;i<num;i++){
		scanf("%d",&n);
		fibonacci(n);
		for(i=count;i<count+1;i++){
			arr[i]=zero;
			arr[i+1]=one;
		}
	}
	for(i=0;i<d;i++){
		if(i<d){
			printf("%d %d",arr[i],arr[i+1]);
			if(i%2==0){
				printf("\n");
			}
		}
	}
	return 0;
}