#include <stdio.h>
#include <stdlib.h>

int main(){
	double arr[22]={0,};
	int i;
	int count = 0;
	double sum=0;
	printf("1.5 3 4 5 6 7 10 12 15 20 25 30 35 50 150 200 500 600 1500 2000 5000 6000\n");

	for(i=0;i<22;i++){
		scanf("%lf",&arr[i]);
	}

	for(i=0;i<22;i++){
		if(i==0)
			arr[i]*=1.5;
		else if(i==1)
			arr[i]*=3;
		else if(i==2)
			arr[i]*=4;
		else if(i==3)
			arr[i]*=5;
		else if(i==4)
			arr[i]*=6;
		else if(i==5)
			arr[i]*=7;
		else if(i==6)
			arr[i]*=10;
		else if(i==7)
			arr[i]*=12;
		else if(i==8)
			arr[i]*=15;
		else if(i==9)
			arr[i]*=20;
		else if(i==10)
			arr[i]*=25;
		else if(i==11)
			arr[i]*=30;
		else if(i==12)
			arr[i]*=35;
		else if(i==13)
			arr[i]*=50;
		else if(i==14)
			arr[i]*=150;
		else if(i==15)
			arr[i]*=200;
		else if(i==16)
			arr[i]*=500;
		else if(i==17)
			arr[i]*=600;
		else if(i==18)
			arr[i]*=1500;
		else if(i==19)
			arr[i]*=2000;
		else if(i==20)
			arr[i]*=5000;
		else if(i==21)
			arr[i]*=6000;
	}

	for(i=0;i<22;i++){
		sum += arr[i];
	}

	printf("Result : %.1lfK\n",sum);

	return 0;
}
