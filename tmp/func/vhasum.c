#include <stdio.h>

int horizon(int arr[][5],int n);
int vertical(int arr[][5],int n);
int all(int arr[][5]);


int arr[3][5]={90,78,77,98,98,
		80,45,67,88,57,
		88,99,65,55,74};

int main(){

	int hsum[3];
	int vsum[5];
	int asum;

	int i,j=0;

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	j=0;

	for(i=0;i<3;i++){
		hsum[i]=horizon(arr,j);
		j++;
	}
	j=0;
	for(i=0;i<5;i++){
		vsum[i]=vertical(arr,j);
		j++;
	}
	for(i=0;i<15;i++)
		asum=all(arr);


	for(i=0;i<3;i++)
		printf("%d's hsum is %d\n",i+1,hsum[i]);
	printf("------------------------------------------------------------\n");
	for(i=0;i<5;i++)
		printf("%d's vsum is %d\n",i+1,vsum[i]);
	printf("------------------------------------------------------------\n");
	printf("all sum is %d\n",asum);

	return 0;
}
int horizon(int arr[][5],int n){
	int sum=0;
	int i;

	for(i=0;i<5;i++){
		sum+=arr[n][i];
		printf("%d\n",arr[n][i]);
	}
	printf("\n");
	return sum;
}
int vertical(int arr[][5],int n){
	int sum=0;
	int i;
	for(i=0;i<3;i++){
		sum+=arr[i][n];
		printf("%d\n",arr[i][n]);
	}
	return sum;
}
int all(int arr[][5]){
	int sum=0;
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			sum+=arr[i][j];
		}
	}
	return sum;
}
