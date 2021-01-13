#include <stdio.h>

int main() {

    float m[12][12],sum = 0.0;
    int i,j,k,l,c;
    scanf("%d",&c);
    char a[2];
    scanf("%s",&a);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&m[i][j]);
        }
    }

    for(k=c;k<=c;k++){
        for(l=0;l<12;l++){
            sum = sum + m[l][k];
        }
    }

    if(a[0]=='S'){
        printf("%.1f\n",sum);
    }
    else if(a[0]=='M'){
        printf("%.1f\n",sum/12.0);
    }

    return 0;
}
