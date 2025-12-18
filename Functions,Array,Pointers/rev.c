#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("Enter elemens in array ");
        scanf("%d",&a[i]);
    }
    for(i=5;i>0;i--)
    {
        printf("reverse arr is %d\n",a[i]);
    }
    return 0;
}