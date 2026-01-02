/*Print all elements of an array */
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int i;
    for(i=0;i<4;i++)
    {
        printf("Displayin the array  arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}