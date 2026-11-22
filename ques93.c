/*
Q93: Write a C program to check if two strings
are anagrams of each other.

Sample Test Case 1:

Input:
listen
silent

Output:
Anagrams

Sample Test Case 2:

Input:
hello
world

Output:
Not anagrams
*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != '\n')
        {
            freq[(unsigned char)str1[i]]++;
        }
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] != '\n')
        {
            freq[(unsigned char)str2[i]]--;
        }
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not anagrams");
    }

    return 0;
}