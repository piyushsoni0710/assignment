/**
 * C program to print hollow right triangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        { 
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
            if(j==1 || j==i || i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}