/*
Q99: Write a C program to change the date format
from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Case:

Input:
15/04/2025

Output:
15-Apr-2025
*/

#include <stdio.h>

int main()
{
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-", day);

    switch(month)
    {
        case 1: printf("Jan"); break;
        case 2: printf("Feb"); break;
        case 3: printf("Mar"); break;
        case 4: printf("Apr"); break;
        case 5: printf("May"); break;
        case 6: printf("Jun"); break;
        case 7: printf("Jul"); break;
        case 8: printf("Aug"); break;
        case 9: printf("Sep"); break;
        case 10: printf("Oct"); break;
        case 11: printf("Nov"); break;
        case 12: printf("Dec"); break;

        default:
            printf("Invalid month");
            return 0;
    }

    printf("-%d", year);

    return 0;
}