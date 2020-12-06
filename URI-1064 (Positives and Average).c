#include<stdio.h>

int main()
{
    float x,y,total=0;
    int i,sum=0;
    for(i=1;i<=6;i++){
        scanf("%f",&x);
    if(x>0){
        sum=sum+1;
        total+=x;
        y=(total/sum);
    }
    }
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",y);
    return 0;//end line
}
