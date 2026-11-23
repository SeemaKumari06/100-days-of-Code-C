//create employee structure with nested date structure for joining date and print deatils
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;

    struct Date joiningDate;
};

int main()
{
    struct Employee e1;

    e1.id = 101;
    e1.salary = 35000;

    printf("Enter employee name: ");
    fgets(e1.name, sizeof(e1.name), stdin);

    e1.joiningDate.day = 1;
    e1.joiningDate.month = 7;
    e1.joiningDate.year = 2026;

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e1.id);
    printf("Name: %s", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Joining Date: %02d-%02d-%d\n",
           e1.joiningDate.day,
           e1.joiningDate.month,
           e1.joiningDate.year);

    return 0;
}
