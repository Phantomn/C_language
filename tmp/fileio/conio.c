#include <stdio.h>
#include <conio.h>

int main(){
	char ch=0;
	printf("Input Key");

	while(ch!='q'){
		if(kbhit()){
			ch=getche();
			putch(ch);
		}
	}

	return 0;
}
