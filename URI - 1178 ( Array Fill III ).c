#include <stdio.h>

int main() {

    int i,j;
    double x,n[100];
    scanf("%lf",&x);

    for(i=0;i<100;i++){
        if(i==0){
            n[i] = x;
        }
        else{
            n[i] = n[i-1]/2;
        }
    }
    for(j=0;j<100;j++)
    {
        printf("N[%d] = %.4lf\n",j,n[j]);
    }


    return 0;
}
