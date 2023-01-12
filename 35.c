/**
 * C program to print the half diamond number pattern with star border
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    printf("*\n");
    // Print the first upper half
    for(i=1; i<=N; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }

    // Print the lower half of the pattern
    for(i=N-1; i>=1; i--)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");

    return 0;
}