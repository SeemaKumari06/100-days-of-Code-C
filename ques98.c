/*
Q98: Write a C program to print initials of a name
with the surname displayed in full.

Sample Test Case:

Input:
John David Doe

Output:
J.D. Doe
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    // Find first name
    while(str[i] != ' ' && str[i] != '\0')
    {
        i++;
    }

    printf("%c.", str[0]);

    // Print middle name initials
    while(str[i] == ' ')
    {
        i++;

        if(str[i] == '\0' || str[i] == '\n')
        {
            break;
        }

        start = i;

        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            if(str[i] == '\0' || str[i] == '\n')
            {
                printf(" %s", str + start);
                break;
            }

            printf("%c.", str[start]);
        }
    }

    return 0;
}