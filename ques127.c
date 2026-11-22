
/*
Q127: Write a program that reads text from input.txt,
converts all lowercase letters to uppercase,
and writes the result to output.txt.

Sample Test Case:

Input 1:
Input File (input.txt):
Hello World
C programming

Output 1:
Output File (output.txt):
HELLO WORLD
C PROGRAMMING
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    // Open input.txt in read mode
    fp1 = fopen("input.txt", "r");

    // Check whether input file exists
    if (fp1 == NULL)
    {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output.txt in write mode
    fp2 = fopen("output.txt", "w");

    // Check whether output file opened successfully
    if (fp2 == NULL)
    {
        printf("Error: Cannot create output.txt!\n");
        fclose(fp1);
        return 1;
    }

    // Read each character from input.txt
    while ((ch = fgetc(fp1)) != EOF)
    {
        // Convert lowercase character to uppercase
        ch = toupper((unsigned char)ch);

        // Write converted character into output.txt
        fputc(ch, fp2);
    }

    // Close both files
    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully!\n");
    printf("Check output.txt for the result.\n");

    return 0;
}
