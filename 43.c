/**
 * C program to left rotate an array
 */

#include <stdio.h>
#define SIZE 10 /* Size of the array */

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    printf("Enter 10 elements array: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &N);

    /* Actual rotation */
    N = N % SIZE;

    /* Print array before rotation */
    printf("Array before rotationn");
    printArray(arr);

    /* Rotate array n times */
    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    /* Print array after rotation */
    printf("\n\nArray after rotation\n");
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, first;

    /* Store first element of array */
    first = arr[0];

    for(i=0; i<SIZE-1; i++)
    {
        /* Move each array element to its left */
        arr[i] = arr[i + 1];
    }

    /* Copies the first element of array to last */
    arr[SIZE-1] = first;
}


/**
 * Print the given array
 */
void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}
