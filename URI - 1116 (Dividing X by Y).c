#include <stdio.h>
int main()
{
    int i,n,x,y;
    float a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            a = (float) x;
            b = (float) y;
            printf("%.1f\n",a/b);
        }
    }
    return 0;
}
