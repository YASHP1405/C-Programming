/*Wrjite a program to take input make value change and display array*/
#include<stdio.h>
int main(){
    int i,j;
    int arr[50];
    for(i=0;i<=4;i++)
    {
        printf("Enter the value of array ");
        scanf("%d",&arr[i]);
    }
    for (j=0;j<=4;j++)
    {
        printf("The array is arr[%d] = %d\n",j,arr[j]);
        arr[2]=35;
    }
    return 0;
}