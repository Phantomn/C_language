#include <stdio.h>
#include <float.h>

int main(void){
	printf("float is min %e, max %e\n",FLT_MIN,FLT_MAX);
	printf("double is min %e, max %e\n",DBL_MIN,DBL_MAX);
	printf("long double is min %e, max %e\n",LDBL_MIN,LDBL_MAX);

	return 0;
}
