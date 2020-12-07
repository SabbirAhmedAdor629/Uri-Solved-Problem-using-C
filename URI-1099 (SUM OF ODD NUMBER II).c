#include<stdio.h>
int main(){
    int n,i,j,X,Y,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&X,&Y);
        if(X>Y){
            for(j=Y+1;j<X;j++){
                    if(j%2!=0){
                        sum = sum+j;
                    }
            }
        }
        else if(Y>X){
            for(j=X+1;j<Y;j++){
                if(j%2!=0){
                    sum = sum+j;
                }
            }
        }
        else if(X==Y){
            sum = 0;
        }
        printf("%d\n",sum);
        sum = 0;

    }

    return 0;
}
