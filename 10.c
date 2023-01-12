//C program to clear nth bit of a number
#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit number you want to clear */
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);

    /*
     * Left shifts 1 to n times
     * Perform complement of above
     * finally perform bitwise AND with num and result of above
     */
    newNum = num & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}