#include <stdio.h>

int main() {

    int n,x,i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            if(j%2!=0){
                s = s+1;
            }
            else{
                s = s-1;
            }
        }
        printf("%d\n",s);
        s = 0;
    }

    return 0;
}
