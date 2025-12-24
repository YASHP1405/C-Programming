/* 
24. Check Palindrome Array

        Write a program that:
        Reads an array
        Uses a function to check whether the array is a palindrome

        */
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int is_palindrome(int arr[], int n){
        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1]){
                return 0;
            }
        }
        return 1;
    }
    if(is_palindrome(arr,n)){
        printf("The array is a palindrome.\n");
    }else{
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
