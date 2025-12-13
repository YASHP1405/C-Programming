/* 7. Area & Perimeter of Rectangle – Take length and breadth as input and calculate. */
#include <stdio.h>
int main(){
    int len , breadth , area , perimeter;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &len , &breadth);
    area = len * breadth;
    perimeter = 2 * (len + breadth);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}