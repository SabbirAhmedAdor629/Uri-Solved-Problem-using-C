#include <stdio.h>

int main() {

    int m,n,sum = 0,i;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)
        {
            break;
        }
        else if(m>n)
        {
            for(i=n;i<=m;i++)
            {
                printf("%d ",i);
                sum = sum+i;
            }
            printf("Sum=%d\n",sum);
            sum = 0;
        }
        else if(m<n)
        {
            for(i=m;i<=n;i++)
            {
                printf("%d ",i);
                sum = sum+i;
            }
            printf("Sum=%d\n",sum);
            sum = 0;
        }
    }

    return 0;
}
