#include <stdio.h>

int main(){
    int i;
    int n;
    int fac=0;

    printf("Input num : ");
    scanf("%d",&n);

    for(i=n;i>=0;i--){
        fac += n*(n-1);
    }
    printf("%d! is %d\n",n,fac);

    return 0;
}
