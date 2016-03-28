#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numArr[5];
    int smallestNumber;
    int i,j,temp;
    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3],& numArr[4]);
    smallestNumber = numArr[0];
    for(i=0;i<5;i++){
        if(smallestNumber>numArr[i])
            smallestNumber = numArr[i];
    }

    printf("%d\n", smallestNumber);
}