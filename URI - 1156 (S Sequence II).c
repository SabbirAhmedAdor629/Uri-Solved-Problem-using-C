#include <stdio.h>

int main() {

    double i,j=1,s=0;

    for(i=1;i<=39;i+=2)
    {
        s = s+i/j;
        j = j*2;
    }

    printf("%.2lf\n",s);

    return 0;
}
