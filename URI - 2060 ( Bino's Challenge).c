#include <stdio.h>

int main() {

    int n,m,b=0,c=0,d=0,e=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        if(m%2==0){
            b++;
        }
        if(m%3==0){
            c++;
        }
        if(m%4==0){
            d++;
        }
        if(m%5==0){
            e++;
        }
    }
    printf("%d Multiplo(s) de 2\n",b);
    printf("%d Multiplo(s) de 3\n",c);
    printf("%d Multiplo(s) de 4\n",d);
    printf("%d Multiplo(s) de 5\n",e);

    return 0;
}
