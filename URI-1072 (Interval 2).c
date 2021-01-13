
#include <stdio.h>

int main() {

    int n,x,i,a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>0 && x<11)
        {
            a++;
        }
        else if(x>10 && x<21)
        {
            b++;
        }
        else{
            c++;
        }
    }
    printf("%d in\n",a+b);
    printf("%d out\n",c);


    return 0;
}
