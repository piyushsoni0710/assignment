/**
 * C program to find length of a string using for loop
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    int i;
    int count= 0;

    /* Input a string from user */
    printf("Enter any string: ");
    gets(text);

    /* Iterate till the last character of string */
    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }

    printf("Length of '%s' = %d", text, count);

    return 0;
}