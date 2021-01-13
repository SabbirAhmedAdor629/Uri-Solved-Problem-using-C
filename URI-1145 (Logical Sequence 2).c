#include <stdio.h>

int main() {
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=1;i<y;i=i+x)
    {
        printf("%d %d %d\n",i,i+1,i+2);
    }


    return 0;
}
