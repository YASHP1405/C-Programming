/* Take 3 array of 3 elements 
   label as a, b, c
   In c display sum of a and b
*/

#include <stdio.h>

int main() {
    int a[3];
    int b[3];
    int c[3];
    int i;

    printf("Enter 3 elements for array a:\n");
    for(i = 0; i < 3; i++) {
        printf("Enter 3 elements for array a:\n");
        scanf("%d", &a[i]);
    }

   
    for(i = 0; i < 3; i++) {
         printf("Enter 3 elements for array b:\n");
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 3; i++) {
        c[i] = a[i] + b[i];
        printf("c[%d] = %d\n", i, c[i]);
    }
    printf("\nSum of arrays a and b stored in array c:\n");
    

    return 0;
}
