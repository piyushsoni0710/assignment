/**
 * C program to copy one string to another string without using strcpy()
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;
    
    /* Input string from user */
    printf("Enter any string: ");
    gets(text1);
    
    /* Copy text1 to text2 character by character */
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    //Makes sure that the string is NULL terminated
    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}