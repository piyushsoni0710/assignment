/**
 * C program to print hollow square star pattern with diagonal
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=N; j++)
        {
            /*
             * Print star for, 
             * first row (i==1) or 
             * last row (i==N) or
             * first column (j==1) or
             * last column (j==N) or 
             * row equal to column (i==j) or 
             * column equal to N-row (j==N-i+1)
             */
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}