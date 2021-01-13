
#include <stdio.h>

int fact(n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main() {
    int n,r;
    scanf("%d",&n);
    r = fact(n);
    printf("%d\n",r);

    return 0;
}
