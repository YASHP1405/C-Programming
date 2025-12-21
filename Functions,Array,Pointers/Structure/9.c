/* 9. Write a program to compare two dates.*/
#include<stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
int main()
{
    struct Date d1,d2;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yyyy);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yyyy);
    if(d1.yyyy<d2.yyyy || (d1.yyyy==d2.yyyy && d1.mm<d2.mm) || (d1.yyyy==d2.yyyy && d1.mm==d2.mm && d1.dd<d2.dd))
        printf("First date is earlier than second date.\n");
    else if(d1.yyyy==d2.yyyy && d1.mm==d2.mm && d1.dd==d2.dd)
        printf("Both dates are equal.\n");
    else
        printf("Second date is earlier than first date.\n");
    return 0;
}