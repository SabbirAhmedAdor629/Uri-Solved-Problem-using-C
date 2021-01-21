#include <stdio.h>
int main() {

    float a,b,c,f,d=((8*1000)/100),e=((18*1500)/100),t;
    scanf("%f",&a);
    if(a<2000.00)
    {
        printf("Isento\n");
    }
    else{
        b = a-2000.00;
        c = b-1000.00;
        f = c-1500.00;
        if(b<=1000.00){
            t = ((b*8)/100);
        }
        else if(b>1000.00 && b<=2500.00){
            t = d + ((c*18)/100);
        }
        else if(b>2500.00){
            t = d + e + ((f*28)/100);
        }


        printf("R$ %.2f\n",t);
    }


    return 0;
}
