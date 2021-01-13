#include <stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==n){
            printf("Ho!\n");
            break;
        }
        else{
            printf("Ho");
            printf(" ");
        }
    }

    return 0;
}
