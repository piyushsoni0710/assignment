//C program to find area of a rectangle#include <stdio.h>

int main()
{
    float length, width, area;

    /*
     * Input length and width of rectangle
     */
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    /* Calculate area of rectangle */
    area = length * width;

    /* Print area of rectangle */
    printf("Area of rectangle = %f sq. units ", area);

    return 0;
}