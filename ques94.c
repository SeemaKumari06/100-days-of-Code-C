/*
Q94: Write a C program to find the longest word
in a sentence.

Sample Test Case:

Input:
I love programming

Output:
programming
*/

#include <stdio.h>

int main()
{
    char str[200];
    char longest[100];

    int i = 0, j = 0;
    int max = 0, count = 0;

    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;

                int k;

                for(k = 0; k < count; k++)
                {
                    longest[k] = str[i - count + k];
                }

                longest[count] = '\0';
            }

            count = 0;
        }

        if(str[i] == '\0' || str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}