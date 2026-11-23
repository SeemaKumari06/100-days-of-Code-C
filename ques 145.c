//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

struct Student findTop(struct Student s1, struct Student s2)
{
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main()
{
    struct Student s1 = {"Rahul", 101, 85.5};
    struct Student s2 = {"Riya", 102, 92.0};

    struct Student top;

    top = findTop(s1, s2);

    printf("Top Student Details\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
