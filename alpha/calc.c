#include <stdio.h>
#include <string.h>

int main(){
	char str[4];
	int n1, n2;
	int flag=0;

	scanf("%s %d %d",str,&n1,&n2);

	if(strcmp(str,"add")==0)
		flag = 1;
	else if(strcmp(str,"sub")==0)
		flag = 2;
	else if(strcmp(str,"mul")==0)
		flag = 3;
	else if(strcmp(str,"div")==0)
		flag = 4;
	else
		flag = 0;

	if(flag==0){
		printf("Input Error\n");
		return -1;
	}
	switch(flag){
		case 1:
			printf("%d + %d = %d\n",n1,n2,n1+n2);
			break;
		case 2:
			printf("%d - %d = %d\n",n1,n2,n1-n2);
			break;
		case 3:
			printf("%d * %d = %d\n",n1,n2,n1*n2);
			break;
		case 4:
			printf("%d / %d = %d\n",n1,n2,n1/n2);
			break;
	}
	return 0;
}