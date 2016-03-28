#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    float num1 = 98.415237f;
    int num2 = 0x3fce1920;

    sprintf(s1, "%f %d", num1,num2);
    printf("%s\n", s1);

    return 0;
}