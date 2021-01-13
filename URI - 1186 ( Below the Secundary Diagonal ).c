#include <stdio.h>

int main() {

    float m[12][12],sum = 0.0, t = 0.0;
    int i,j,k,l;
    char a[2];
    scanf("%s",&a);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&m[i][j]);
        }
    }
    int p = 11;

    for(k=0;k<12;k++)
    {
        for(l=p+1;l<12;l++){
            sum = sum + m[k][l];
            t = t+1.0;
        }
        p--;
    }


    if(a[0]=='S'){
        printf("%.1f\n",sum);
    }
    else if(a[0]=='M'){
        printf("%.1f\n",sum/t);
    }

    return 0;
}

