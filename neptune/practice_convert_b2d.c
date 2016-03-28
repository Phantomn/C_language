#include <stdio.h>

int main()
{
    int decimal = 0;
    int binary[4] = { 1, 1, 0, 1 }; // 1101 순서대로 저장됨
    int i;
    int position = 0;

    for(i=3;i>=0;i--){
    	if(binary[i]==1)
    		decimal += 1 << position;
    	position++;
    }

    printf("%d\n", decimal);
}