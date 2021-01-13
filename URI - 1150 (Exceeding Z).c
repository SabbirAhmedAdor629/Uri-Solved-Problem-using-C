
#include <stdio.h>

int main() {

    int x,z,i,c=0,sum=0;
    scanf("%d",&x);
    while(1){
        scanf("%d",&z);
        if(z>x)
            break;
    }
    for(i=x;i<z;i++)
    {
        sum = sum + i;
        c++;
        if(sum>z){
            break;
        }
    }
    printf("%d\n",c);

    return 0;
}
