#include<stdio.h>
int main(){
    int x,i;

    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        else{
            for(i=1;i<=x;i++){
                printf("%d",i);
                if(i !=x){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
