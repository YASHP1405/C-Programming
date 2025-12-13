/* 8. Volume of Cube, Cuboid, Sphere, Cylinder – Based on given dimensions.*/
#include<stdio.h>
int main(){
    int choice;
    float side, length, breadth, height, radius, volume;
    printf("Choose the shape to calculate volume:\n");
    printf("1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter side length of cube: ");
            scanf("%f", &side);
            volume = side * side * side;
            printf("Volume of Cube: %.2f\n", volume);
            break;
        case 2:
            printf("Enter length, breadth and height of cuboid: ");
            scanf("%f %f %f", &length, &breadth, &height);
            volume = length * breadth * height;
            printf("Volume of Cuboid: %.2f\n", volume);
            break;
        case 3:
            printf("Enter radius of sphere: ");
            scanf("%f", &radius);
            volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
            printf("Volume of Sphere: %.2f\n", volume);
            break;
        case 4:
            printf("Enter radius and height of cylinder: ");
            scanf("%f %f", &radius, &height);
            volume = 3.14159 * radius * radius * height;
            printf("Volume of Cylinder: %.2f\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}