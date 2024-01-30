#include<stdio.h>
void main()
{
    float rad,area ;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = 3.14*rad*rad;
    printf("The area of the given circle is %f", area);
}
