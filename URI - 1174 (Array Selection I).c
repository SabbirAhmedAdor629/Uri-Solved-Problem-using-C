#include <stdio.h>

int main() {

    float a[100];
    int i,j;
    for(i=0;i<100;i++){
        scanf("%f",&a[i]);
    }
    for(j=0;j<100;j++){
        if(a[j]<=10){
            printf("A[%d] = %.1f\n",j,a[j]);
        }
    }
    return 0;
}
