#include <stdio.h>

void pascal(int n){
	int i,j;
	int arr[10][20]={0,};

	arr[1][n]=1;										//모든 첫번째 끝은 1
	for(i=2;i<=n;i++){
		for(j=1;j<=n*2;j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j+1];	// 양 변의 위를 더함
		}
	}
	for(i=1;i<=n;i++){									//공백 출력 0인경우 공백 아니면 숫자
		for(j=1;j<=n*2;j++){
			if(arr[i][j]==0)
				printf("\t");
			else
				printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}														//거의 글보고 한거라 실패

int main(){
	int n;

	printf("Input height : ");
	scanf("%d",&n);

	pascal(n);

	return 0;
}