//C program to find maximum between three numbers using conditional operator#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    /*
     * Input three numbers from user
     */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    /*
     * If num1 > num2 and num1 > num3 then
     *     assign num1 to max
     * else if num2 > num3 then
     *     assign num2 to max
     * else
     *     assign num3 to max
     */
    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;

    printf("\nMaximum between %d, %d and %d = %d", num1, num2, num3, max);

    return 0;
}