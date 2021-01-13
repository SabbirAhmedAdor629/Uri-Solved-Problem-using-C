#include<stdio.h>
int main(){
    int arr[30],i;
    int n;
    printf("How many fibonacci number do you want: ");

    scanf("%d",&n);

    arr[0]=0;
    arr[1]=1;
    for(i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];

    }

        printf("%d\n",arr[i-1]);


    return 0 ;
}
