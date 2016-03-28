#include <stdio.h>

int main(){
	double n1,n2,result;
	printf("Input Two double : ");
	scanf("%lf %lf",&n1,&n2);
	result = n1 / n2;

	if(result>0){
		printf("%lf\n",result);
		printf("Compile Date : %s\n",__DATE__);
		printf("Compile Time : %s\n",__TIME__);
		printf("File Name : %s\n",__FILE__);
	}
	else{
		printf("error\n");
		printf("Line Num : %d\n",__LINE__);
	}
	return 0;
}
