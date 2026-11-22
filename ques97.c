/*
Q97: Write a C program to print the initials of a name.

Sample Test Case:

Input:
John Doe

Output:
J.D.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    // Print first initial
    if(str[0] != ' ' && str[0] != '\n')
    {
        printf("%c.", str[0]);
    }

    // Print initials after spaces
    for(i = 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ' &&
           str[i + 1] != '\n' && str[i + 1] != '\0')
        {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}