/*3. Find the average of the array elements*/
#include<stdio.h>
int main(){
    int a[5],sum=0,i,avg;
    printf("Enter 5 elements of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
        avg = sum/2;
}
    printf("The average of array elements is: %d\n",avg);
    return 0;
}