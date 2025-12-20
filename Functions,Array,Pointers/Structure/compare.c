#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct student s1 = {"Yash",101,88.57};
    printf("Name: %s\n",s1.name);
    printf("Roll Number: %d\n",s1.roll);
    printf("Marks: %f\n",s1.marks);
    
    struct student s2 = {"Yash",102,88.57};
    printf("Name: %s\n",s2.name);
    printf("Roll Number: %d\n",s2.roll);    
    printf("Marks: %f\n",s2.marks);

    if ( s1.name == s2.name&& s1.marks == s2.marks) {
        printf("Both students have same name and marks.\n");

    }

    else {
        printf("Students have different marks.\n");
    }

    return 0;
}
/*
E Balagutuswamyami, "Programming in C", Third Edition, Tata McGraw Hill, 2012.*/