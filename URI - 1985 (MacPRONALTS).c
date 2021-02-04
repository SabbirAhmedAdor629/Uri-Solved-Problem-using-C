#include <stdio.h>

int main() {
    int n,m,i;
    double o,p,sum = 0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        scanf("%lf",&o);
        if(m==1001){
            p = 1.50*o;
        }
        else if(m==1002){
            p = 2.50*o;
        }
        else if(m==1003){
            p = 3.50*o;
        }
        else if(m==1004){
            p = 4.50*o;
        }
        else if(m==1005){
            p = 5.50*o;
        }
        sum = sum + p;
        p = 0.0;
    }

    printf("%.2lf\n",sum);

    return 0;
}
