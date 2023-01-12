/**
 * C program to trim both leading and trailing white space characters from a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trim(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming white space: \n'%s'", str);

    trim(str);

    printf("\n\nString after trimming white space: \n'%s'", str);

    return 0;
}