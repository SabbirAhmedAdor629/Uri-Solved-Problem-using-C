#include <stdio.h>
int main() {

    float x,y;
    while(1)
    {
        scanf("%f %f",&x,&y);

        if(x>0 && x<10.0)
        {
            printf("Media %d\n",(x+y)/12);
            break;
        }
        else
        {
            printf("nota invalida\n");
            continue;
        }
    }

    return 0;
}
