#include<stdio.h>
void main()
{
    float b, h, ar;
    printf("Enter the base and height of a triangle: ");
    scanf("%f %f", &b, &h);
    ar = 0.5 * b * h;
    printf("The areas of the given triangle is %f\n", ar);

}