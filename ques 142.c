//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s[5] = {
        {"Rahul", 101, 85.5},
        {"Riya", 102, 92.0},
        {"Aman", 103, 78.5},
        {"Priya", 104, 88.0},
        {"Karan", 105, 81.5}
    };

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d Details\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
