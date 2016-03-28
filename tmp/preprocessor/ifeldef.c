#include <stdio.h>

#define CODE 3

int main(){


	#if(CODE==1)
		double n1,n2,result;
		printf("Input Two Double : ");
		scanf("%lf %lf",&n1,&n2);
		result = n1/n2;
		printf("div result : %lf\n",result);
	#else
		int n1,n2,result;
		printf("Input Two Int : ");
		scanf("%d %d",&n1,&n2);
		result = n1+n2;
		printf("add result : %d\n",result);
	#endif

		return 0;
}
