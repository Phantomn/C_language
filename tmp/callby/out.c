#include <stdio.h>
void pointer(int* x);
void out(int* x);
int main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int* p=&a[0];

	printf("실행 전 :");
	out(p);

	pointer(p);

	printf("실행 후 :");
	out(p);

	return 0;
}
void pointer(int* x)
{
	int i,j=0;
	for(i=7;i>=0;i--)
	{
		if(i==7)
			j=x[i];
		else
			x[i+1]=x[i];
	}
	x[0]=j;

}

void out(int* x)
{
	int i;
	for(i=0;i<8;i++)
		printf("%2d",x[i]);
	printf("\n");
}
