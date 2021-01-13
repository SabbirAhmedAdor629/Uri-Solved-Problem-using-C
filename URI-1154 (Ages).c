#include <stdio.h>

int main() {
    float n,sum=0.0,c=0.0;
    while(1)
    {
        scanf("%f",&n);
        if(n<0){
            break;
        }
        else{
            sum=sum+n;
            c=c+1.0;
        }
    }
    printf("%.2f\n",sum/c);

    return 0;
}
