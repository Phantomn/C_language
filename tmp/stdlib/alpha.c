#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[1000];
	char* p=NULL;
	int i=0;
	int arr[26]={0,};

	printf("Input string : ");
	gets(str);
	p=str;
	while(p!=NULL){
		if(*p=='A'|| *p=='a')
			arr[0]++;
		else if(*p=='B'|| *p=='b')
			arr[1]++;
		else if(*p=='C'|| *p=='c')
			arr[2]++;
		else if(*p=='D'|| *p=='d')
			arr[3]++;
		else if(*p=='E'|| *p=='e')
			arr[4]++;
		else if(*p=='F'|| *p=='f')
			arr[5]++;
		else if(*p=='G'|| *p=='g')
			arr[6]++;
		else if(*p=='H'|| *p=='h')
			arr[7]++;
		else if(*p=='I'|| *p=='i')
			arr[8]++;
		else if(*p=='J'|| *p=='j')
			arr[9]++;
		else if(*p=='K'|| *p=='k')
			arr[10]++;
		else if(*p=='L'|| *p=='l')
			arr[11]++;
		else if(*p=='M'|| *p=='m')
			arr[12]++;
		else if(*p=='N'|| *p=='n')
			arr[13]++;
		else if(*p=='O'||  *p=='o')
			arr[14]++;
		else if(*p=='P'|| *p=='p')
			arr[15]++;
		else if(*p=='Q'|| *p=='q')
			arr[16]++;
		else if(*p=='R'|| *p=='r')
			arr[17]++;
		else if(*p=='S'|| *p=='s')
			arr[18]++;
		else if(*p=='T'|| *p=='t')
			arr[19]++;
		else if(*p=='U'|| *p=='u')
			arr[20]++;
		else if(*p=='V'|| *p=='v')
			arr[21]++;
		else if(*p=='W'|| *p=='w')
			arr[22]++;
		else if(*p=='X'|| *p=='x')
			arr[23]++;
		else if(*p=='Y'|| *p=='y')
			arr[24]++;
		else if(*p=='Z'|| *p=='z')
			arr[25]++;
		if(isalpha(*p)){
			p++;
		}
		else
			break;
	}
	for(i=0;i<26;i++){
		if(arr[i]!=0){
			switch(i){
				case 0 : printf("a : %d\n",arr[i]);
					 break;
				case 1 : printf("b : %d\n",arr[i]);
					 break;
				case 2 : printf("c : %d\n",arr[i]);
					 break;
				case 3 : printf("d : %d\n",arr[i]);
					 break;
				case 4 : printf("e : %d\n",arr[i]);
					 break;
				case 5 : printf("f : %d\n",arr[i]);
					 break;
				case 6 : printf("g : %d\n",arr[i]);
					 break;
				case 7 : printf("h : %d\n",arr[i]);
					 break;
				case 8 : printf("i : %d\n",arr[i]);
					 break;
				case 9 : printf("j : %d\n",arr[i]);
					 break;
				case 10 : printf("k : %d\n",arr[i]);
					  break;
				case 11 : printf("l : %d\n",arr[i]);
					  break;
				case 12 : printf("m : %d\n",arr[i]);
					  break;
				case 13 : printf("n : %d\n",arr[i]);
					  break;
				case 14 : printf("o : %d\n",arr[i]);
					  break;
				case 15 : printf("p : %d\n",arr[i]);
					  break;
				case 16 : printf("q : %d\n",arr[i]);
					  break;
				case 17 : printf("r : %d\n",arr[i]);
					  break;
				case 18 : printf("s : %d\n",arr[i]);
					  break;
				case 19 : printf("t : %d\n",arr[i]);
					  break;
				case 20 : printf("u : %d\n",arr[i]);
					  break;
				case 21 : printf("v : %d\n",arr[i]);
					  break;
				case 22 : printf("w : %d\n",arr[i]);
					  break;
				case 23 : printf("x : %d\n",arr[i]);
					  break;
				case 24 : printf("y : %d\n",arr[i]);
					  break;
				case 25 : printf("z : %d\n",arr[i]);
					  break;
			}
		}
	}
	return 0;
}

