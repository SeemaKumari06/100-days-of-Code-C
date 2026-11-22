/*
Q95: Write a C program to check if one string
is a rotation of another.

Sample Test Case 1:

Input:
abcde
deabc

Output:
Rotation

Sample Test Case 2:

Input:
abc
acb

Output:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    int len1, len2;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2)
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        if(strstr(temp, str2) != NULL)
        {
            printf("Rotation");
        }
        else
        {
            printf("Not rotation");
        }
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}