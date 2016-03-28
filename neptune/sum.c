#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int sum = 0;

    scanf("%d", &num1);

    int i = 1;
    do
    {
        sum+=i;
        i++;
    } while (i <= num1);

    printf("%d\n", sum);

    return 0;
}