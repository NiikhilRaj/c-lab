#include<stdio.h>
void main()
{
    int num1, num2;
    printf("ENter two numbers: ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2; 
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After Swapping: %d  %d\n", num1, num2);

}