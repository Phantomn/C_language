#include <stdio.h>
#include <math.h>
void prime(double a, double b);
int main(){
	double a,b;
	scanf("%lf %lf", &a,&b);

	prime(a,b);

	return 0;
}

void prime(double a,double b){
	int i=0;
	i = a;
	if((i%2==0 || i%3==0))
		i++;
	for(i=a;i<=b;i++){
		if(i==2 || i==3)
			printf("%d ",i);
		if(i%2!=0 && i%3!=0){
			printf("%d ",i);
		}
	}
}
