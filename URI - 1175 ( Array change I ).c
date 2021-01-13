#include <stdio.h>

int main() {

    int n[20],m[20],i,j,k=0;
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }

    for(j=4;j>=0;j--){
        printf("N[%d] = %d\n",k,n[j]);
        k=k+1;
    }

    return 0;
}
