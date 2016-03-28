#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[31];
    char *str="th";

    scanf("%s",s1);
    strcat(s1,str);

    printf("%s\n",s1);

    return 0;
}