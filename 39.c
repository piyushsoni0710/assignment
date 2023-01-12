/**
 * C program to print all perfect numbers in given range using function
 */
 
#include <stdio.h>


/* Function declarations */
int isPerfect(int num);
void printPerfect(int start, int end);



int main()
{
    int start, end;
    
    /* Input lower and upper limit to print perfect numbers */
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
    
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
    
    return 0;
}



/**
 * Check whether the given number is perfect or not.
 * Returns 1 if the number is perfect otherwise 0.
 */
int isPerfect(int num)
{
    int i, sum;
    
    /* Finds sum of all proper divisors */
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    /* 
     * If sum of proper positive divisors equals to given number 
     * then the number is perfect number
     */
    if(sum == num)
        return 1;
    else
        return 0;
}



/**
 * Print all perfect numbers between given range start and end.
 */
void printPerfect(int start, int end)
{
    /* Iterates from start to end */
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d, ", start);
        }
        
        start++;
    }   
}