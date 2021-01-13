#include <stdio.h>

int main() {
    int a,i,j,n[10];
    scanf("%d",&a);

    for(i=0,j=0; i<10; i++)
    {
        scanf("n[%d] = %d",i,j);
        j++;
        if(j == a)
        {
            j=0;
        }
    }
    for(i=0,j=0; i<10; i++){
        printf("N[%d] = %d\n",n[i],n[j]);
    }

    return 0;
}
