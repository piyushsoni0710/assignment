/**
 * C program to check even or odd number
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    
    /* Check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)
    {
        /* num % 2 is 0 */
        printf("Number is Even.");
    }
    else
    {
        /* num % 2 is 1 */
        printf("Number is Odd.");
    }

    return 0;
}