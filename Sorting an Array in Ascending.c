#include<stdio.h>
int main(){
    int a,i,j,n,number[30];

    printf("Enter the size of the array : \n");
    scanf("%d",&n);

    printf("Enter Array element: \n");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(number[i]>number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The Ascending sorted list will be : \n");
    for(i=0;i<n;i++){
        printf("%d\n",number[i]);
    }

    return 0;
}
