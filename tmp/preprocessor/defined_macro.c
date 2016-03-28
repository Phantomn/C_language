#include <stdio.h>

int main(){
	printf("File Name : %s\n",__FILE__);
	printf("line num : %d\n",__LINE__);
	printf("compile data : %s\n",__DATE__);
	printf("compile time : %s\n",__TIME__);


	return 0;
}

