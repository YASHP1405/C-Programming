/* 14. Write a program using nested structures for:
        Student
        Address (city, pincode) */
#include<stdio.h>
struct Address {
        char city[20];
        int pincode;
};
struct Student {
        char name[20];
        int age;
        struct Address addr;
};
int main(){
        struct student stu;
        printf("Enter name: ");
        scanf("%s",stu.name);
        printf("Enter age: ");
        scanf("%d",&stu.age);
        printf("Enter city: ");
        scanf("%s",stu.addr.city);
        printf("Enter pincode: ");
        scanf("%d",&stu.addr.pincode);
        printf("\nStudent Details:\n");
        printf("Name: %s\n",stu.name);  
        printf("Age: %d\n",stu.age);
        printf("City: %s\n",stu.addr.city);
        printf("Pincode: %d\n",stu.addr.pincode);
        return 0;
}