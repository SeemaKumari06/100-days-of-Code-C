//Find and print the student with the highest marks.
#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s[3] = {
        {"Rahul", 101, 85.5},
        {"Riya", 102, 92.0},
        {"Aman", 103, 88.5}
    };

    int top = 0;

    for (int i = 1; i < 3; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    printf("Student with Highest Marks:\n");
    printf("Name: %s\n", s[top].name);
    printf("Roll No: %d\n", s[top].roll);
    printf("Marks: %.2f\n", s[top].marks);

    return 0;
}
