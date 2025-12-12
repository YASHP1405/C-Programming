/* 6. Count even and odd numbers in an array */

#include<stdio.h>
int main(){
    int a[5],i,count = 0, count2 = 0;
    for(i = 0; i<=5; i++){
        printf("Enter 5 number :\n");
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count++;
            printf("Even numbers: %d\n",count);
        }
        else{
            count2++;
            printf("Odd numbers: %d\n",count2);
    }

} return 0;
}