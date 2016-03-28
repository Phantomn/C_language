#include <stdio.h>

int factorial(int n);

int main(){
    int num;
    int result;
    printf("Input num : ");
    scanf("%d",&num);

    result=factorial(num);
    printf("%d! is %d\n",num,result);

    return 0;
}
int factorial(int n){
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
