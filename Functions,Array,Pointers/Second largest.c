/*13. Find the second largest number in the array  */
/* 13. Find the second largest number in the array */
#include <stdio.h>

int main()
{
    int arr[10], i;
    int largest, second_largest;

    // Input
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    // Find second largest
    for (i = 2; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    // Output
    printf("Second largest number is: %d\n", second_largest);

    return 0;
}
