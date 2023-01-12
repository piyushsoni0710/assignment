//C program to set nth bit of a number#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to set */
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);

    /* Left shift 1, n times and perform bitwise OR with num */
    newNum = (1 << n) | num;

    printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}