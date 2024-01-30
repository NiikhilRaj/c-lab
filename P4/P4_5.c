#include<stdio.h>
void main()
{
    int num1, num2, swap;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("The numbers are %d %d\n", num1, num2);
}