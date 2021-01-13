#include <stdio.h>

int main() {

    int i,n[10],a;
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            n[i]=a;
        }
        else{
            n[i]=n[i-1]+n[i-1];
        }
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}
