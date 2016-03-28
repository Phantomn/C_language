#include <stdio.h>

int main(){
	char array1[5]={'A','B','C','D','E'};
	int array2[5]={10,20,30,40,50};
	double array3[5]={10.1,20.2,30.3,40.4,50.5};

	printf("%x %x %x %x %x\n",&array1[0],&array1[1],&array1[2],&array1[3],&array1[4]);
	printf("%c %c %c %c %c\n",*(&array1[0]),*(&array1[1]),*(&array1[2]),*(&array1[3]),*(&array1[4]));
	printf("%x %x %x %x %x\n",&array2[0],&array2[1],&array2[2],&array2[3],&array2[4]);
	printf("%d %d %d %d %d\n",*(&array2[0]),*(&array2[1]),*(&array2[2]),*(&array2[3]),*(&array2[4]));

	printf("%x %x %x %x %x\n",&array3[0],&array3[1],&array3[2],&array3[3],&array3[4]);
	printf("%lf %lf %lf %lf %lf\n",*(&array3[0]),*(&array3[1]),*(&array3[2]),*(&array3[3]),*(&array3[4]));
	return 0;
}
