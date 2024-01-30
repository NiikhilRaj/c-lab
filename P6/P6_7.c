#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b)>c || (a+c)>b || (b+c)>a)
    {
        printf("the traingle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }
    
}