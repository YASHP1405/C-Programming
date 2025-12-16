/* 9. Copy one array to another */
#include <stdio.h>
int main(){{
    int i, arr1[5], arr2[5];
    for (i = 0; i < 5; i++){{
        printf("Enter element %d: ");
        scanf("%d", &arr1[i]);
    }}
    for (i = 0; i < 5; i++){{
        arr2[i] = arr1[i];
    }}
    printf("Copied array elements are: ");
    for (i = 0; i < 5; i++){{
        printf("%d ", arr2[i]);
    }}
    return 0;
}}