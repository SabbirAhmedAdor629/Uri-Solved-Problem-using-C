#include <stdio.h>

int main() {
    double vol,d,a,h,r;
    while(scanf("%lf %lf", &vol ,&d)!=EOF){
        r = d/2.0;
        a = 3.14*r*r;
        h = vol/a;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }

    return 0;
}
