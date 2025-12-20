#include<stdio.h>
struct student
{
    char name[10];
    int roll[2];
    float marks;
};

int main(){
    struct student s1 = { "Alice", {101, 102}, 89.5 };
    printf("Name: %s\n", s1.name);
    printf("Roll Numbers: %d, %d\n", s1.roll[0], s1.roll[1]);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
    
}
