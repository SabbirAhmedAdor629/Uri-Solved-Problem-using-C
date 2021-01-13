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

    int p = 0;
    int q = 5;
    for(k=0; k<12; k++){

        if (p<6){
            for(l=0; l<p; l++){
                sum = sum + m[k][l];
                t = t+1.0;
            }
        p++;
        }
        else{
            for(l=0; l<q; l++){
                sum = sum + m[k][l];
                t = t+1.0;
            }
        q--;
        }

    }




    if(a[0]=='S'){
        printf("%.1f\n",sum);
    }
    else if(a[0]=='M'){
        printf("%.1f\n",sum/t);
    }

    return 0;
}



