/*
Q103: Write a C program to find the pivot index.
The sum of elements on the left must equal
the sum of elements on the right.

Sample Test Case:

Input:
6
1 7 3 6 5 6

Output:
3

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int total = 0, left = 0;
    int right;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - arr[i];

        if(left == right)
        {
            printf("%d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("-1");

    return 0;
}