#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int i;
    int sum = 0;

    scanf("%d %d",& num1, &num2);

    i = num1;

    while (1)
    {
      if(i%2==0)
        sum+=i;
      if(i==num2)
        break;
      i+=1;
    }

    printf("%d\n", sum);

    return 0;
}