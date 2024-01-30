#include<stdio.h>
void main()
{
    int n, d1, d2;
    printf("Enter a six digit number: ");
    scanf("%d", &n);
    d1  = n / 100000;
    d2  = n % 10;
    printf("The sum of digits is: %d \n", d1 + d2);
}
