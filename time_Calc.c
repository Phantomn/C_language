#include <stdio.h>

int main(){
	int accel[14]={0,};//1 3 5 10 15 30 60 180 480 900 1440 4320 10080 43200
	int time[3]={0,};
	int i;
	int count = 0;
	int sum = 0;

	printf("1\t3\t5\t10\t15\t30\t60\t3h\t8h\t15h\t1d\t3d\t7d\t30d\n");

	for(i=0;i<14;i++){
		scanf("%d",&accel[i]);
	}

	for(i=0;i<14;i++){
		if(i==0)
			accel[i]*=1;
		else if(i==1)
			accel[i]*=3;
		else if(i==2)
			accel[i]*=5;
		else if(i==3)
			accel[i]*=10;
		else if(i==4)
			accel[i]*=15;
		else if(i==5)
			accel[i]*=30;
		else if(i==6)
			accel[i]*=60;
		else if(i==7)
			accel[i]*=180;
		else if(i==8)
			accel[i]*=480;
		else if(i==9)
			accel[i]*=900;
		else if(i==10)
			accel[i]*=1440;
		else if(i==11)
			accel[i]*=4320;
		else if(i==12)
			accel[i]*=10080;
		else if(i==13)
			accel[i]*=43200;
	}

	for(i=0;i<14;i++){
		sum += accel[i];
	}

	printf("total minute : %d\n",sum);
	while(sum!=0){
		if(sum>=43200){//30d
			time[0]+=30;
			sum%=43200;
		}
		else if(sum>=10080){//7d
			time[0]+=7;
			sum%=10080;
		}
		else if(sum>=4320){//3d
			time[0]+=3;
			sum%=4320;
		}
		else if(sum>=1440){//1d
			time[0]++;
			sum%=1440;
		}
		else if(sum>=900){//15h
			time[1]+=15;
			sum%=900;
		}
		else if(sum>=480){//8h
			time[1]+=8;
			sum%=480;
		}
		else if(sum>=180){//3h
			time[1]+=3;
			sum%=180;
		}
		else if(sum>=60){//1h
			time[1]++;
			sum%=60;
		}
		else if(sum>=30){//30m
			time[2]+=30;
			sum%=30;
		}
		else if(sum>=15){//15m
			time[2]+=15;
			sum%=15;
		}
		else if(sum>=10){//10m
			time[2]+=10;
			sum%=10;
		}
		else if(sum>=5){//5m
			time[2]+=5;
			sum%=5;
		}
		else if(sum>=3){//3m
			time[2]+=3;
			sum%=3;
		}
		else{//1m
			time[2]+=sum;
			break;
		}
	}

	printf("Result : %dd, %dh, %dm\n",time[0],time[1],time[2]);

	return 0;

}