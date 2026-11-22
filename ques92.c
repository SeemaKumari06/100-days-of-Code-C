/*
Q92: Write a C program to find the first repeating
lowercase alphabet in a string.

Sample Test Case:

Input:
stress

Output:
s
*/

#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i, found = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;

            if(freq[str[i] - 'a'] == 2)
            {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
    {
        printf("No repeating character");
    }

    return 0;
}