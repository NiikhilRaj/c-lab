#include<stdio.h>
void main()
{
    int n, d1, d2, d3;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    d1 = n%10;
    d2 = (n/10)%10;
    d3 = n/100;
    printf("THe sum of digits is: %d\n", d1+d2+d3);
}
