/* 23. Rotate array to the right (k positions) */
#include <stdio.h>
int main(){
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n; // In case k is greater than n
    int temp[k];
    // Store last k elements in temp
    for(int i=0; i<k; i++){
        temp[i] = arr[n-k+i];
    }
    // Shift the rest of the elements to the right
    for(int i=n-1; i>=k; i--){
        arr[i] = arr[i-k];
    }
    // Copy the elements from temp to the beginning of arr
    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
    printf("Array after rotating to the right by %d positions:\n", k);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}