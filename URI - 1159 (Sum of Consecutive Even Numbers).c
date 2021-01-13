
#include <stdio.h>

int main() {

    int x,sum=0,i;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else{
            for(i=x;i<x+10;i++)
            {
                if(i%2==0)
                {
                    sum = sum+i;
                }
                else
                {
                    continue;
                }
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
