#include <stdio.h>

int main(){
    int n;
    int h,t,o;
    printf("Input 3 figure num : ");
    scanf("%d",&n);

    h=n/100;
    t=(n%100)/10;
    o=(n%100)%10;
    printf("%d %d %d\n",h,t,o);

    if(h%2==0)
        printf("%d is even num\n",h);
    else
        printf("%d is odd num\n",h);
    if(t%2==0)
        printf("%d is even num\n",t);
    else
        printf("%d is odd num\n",t);
    if(o%2==0)
        printf("%d is even num\n",o);
    else
        printf("%d is odd num\n",o);

    return 0;
}
