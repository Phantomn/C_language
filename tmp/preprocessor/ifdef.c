#include <stdio.h>

#define CODE 2

int main(){
	double n1=0, n2=0, result=0;

	printf("Input Two double : ");
	scanf("%lf %lf", &n1, &n2);

	#if(CODE==1)
		result=n1/n2;
		printf("div result : %lf\n",result);
	#endif

	#if(CODE==2)
		result=n1+n2;
		printf("add result : %lf\n",result);
	#endif

	#if(CODE==3)
		result=n1*n2;
		printf("mul result : %lf\n",result);
	#endif

	#if(CODE==4)
		result=n1-n2;
		printf("sub result : %lf\n",result);
	#endif
		
	return 0;
}
