
/* 11. Create a structure Employee and sort employees by salary.  */
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void sortBySalary(struct Employee emp[],int n)
{
    struct Employee temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(emp[i].salary > emp[j].salary)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}
void displayEmployees(struct Employee emp[],int n)
{
    printf("ID\tName\tSalary\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",emp[i].id,emp[i].name,emp[i].salary);
    }
}
int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter details of employee %d (ID Name Salary): ",i+1);
        scanf("%d %s %f",&emp[i].id,emp[i].name,&emp[i].salary);
    }
    sortBySalary(emp,n);
    printf("\nEmployees sorted by salary:\n");
    displayEmployees(emp,n);
    return 0;
}