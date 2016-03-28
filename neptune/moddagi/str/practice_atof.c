#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s1 = "29.977213 4528.112305";
    float num1;
    float num2;
    char *end;

    num1 = strtof(s1, &end);
    num2 = strtof(end, NULL);

    printf("%f\n", num1);
    printf("%f\n", num2);

    return 0;
}