/**
 * C program to right rotate an array
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
    printf("Enter number of times to right rotate: ");
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
    int i, last;

    /* Store last element of array */
    last = arr[SIZE - 1];

    for(i=SIZE-1; i>0; i--)
    {
        /* Move each array element to its right */
        arr[i] = arr[i - 1];
    }

    /* Copy last element of array to first */
    arr[0] = last;
}