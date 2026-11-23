//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

void display(struct Student s)
{
    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1 = {"Riya", 101, 92.5};

    display(s1);

    return 0;
}
