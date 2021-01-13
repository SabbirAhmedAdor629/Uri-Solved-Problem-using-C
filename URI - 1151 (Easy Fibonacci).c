#include <stdio.h>

int main() {

    int n,a=0,b=1,sum=0,i;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=1;i<=n-2;i++)
    {
        sum = a+b;
        printf(" %d",sum);
        a=b;
        b=sum;
    }
    printf("\n");

    return 0;
}
