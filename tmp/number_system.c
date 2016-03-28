#include <stdio.h>
#include <stdlib.h>
void decimal_to_binary();
void binary_to_decimal();
void main(){
	binary_to_decimal();
	
	return 0;
}

void decimal_to_binary(){
	int result[100000];
	int i;
	int k=0;
	int number;

	printf("Input Number : ");
	scanf("%d",&number);	

	while(number > 0){
		result[k]=number%2;
		number= number / 2;
		k++;
	}
	for(i=k-1;i>=0;i--){
		printf("%d",result[i]);
	}
	printf("\n");
}
void binary_to_decimal(){
	int result=0;
	int i;
	int k=0;
	int number=0;
	char ch[100];
	char str;

	do{
		if(!(number==1 || number==2))
			break;
		printf("Input Number : ");
		scanf("%d",&number);//1010	

		if(number==1){
			result*=2;
			result++;
		}
		if(number==0)
			result*=2;
	}
	while(number==1 || number==0);
	printf("%d\n",result);

}
