#include <stdio.h>

int main() {

    int n,i,j,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=2;j<a;j++)
        {
            if(a%j==0)
            {
                c=1;
            }

        }
        if(c==0){
            printf("%d eh primo\n",a);
        }
        else{
            printf("%d nao eh primo\n",a);
        }
        c=0;
    }

    return 0;
}
