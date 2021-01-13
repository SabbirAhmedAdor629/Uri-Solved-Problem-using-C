#include <stdio.h>

int main() {

    int x,i,  par[5], j=0,k,  impar[5], m=0,l,  p1,p2 ;

    for(i=0;i<15;i++)
    {
        scanf("%d",&x);
        if(x%2 == 0)
        {

            par[j] = x;

            if(j == 4)
            {
                for(k=0;k<5;k++)
                {
                    printf("par[%d] = %d\n",k,par[k]);
                }
                k = 0;
                j = -1;
            }
            j++;

        }

        else
        {
            impar[m] = x;

            if(m == 4)
            {
                for(l=0;l<5;l++)
                {
                    printf("impar[%d] = %d\n",l,impar[l]);
                }
                l = 0;
                m = -1;
            }

            m++;

        }

    }
        for(p1=0;p1<m;p1++){
            printf("impar[%d] = %d\n",p1,impar[p1]);
        }

        for(p2=0;p2<j;p2++){
            printf("par[%d] = %d\n",p2,par[p2]);
        }



    return 0;
}
