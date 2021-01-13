
#include <stdio.h>

int main() {


    double i,j,sum=0,a;

    for(i=1;i<=1;i++)
    {
        for(j=2;j<=100;j++)
        {
            a=i/j;
            sum = sum+a;
            a=0;
        }
    }
    printf("%.2lf\n",sum+1);

    return 0;
}
