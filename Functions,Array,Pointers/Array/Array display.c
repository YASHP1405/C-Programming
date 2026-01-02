/*Write a program to take input and display elements in array ,*/
#include<stdio.h>
int main(){
    int arr[5];
    int i,n;
    for(i=0;i<=4;i++)
    {
        printf("Enter the five digit to store :");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("Display the array  arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}