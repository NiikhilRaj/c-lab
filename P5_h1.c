#include<stdio.h>
void main()
{
    int n1, d1, d2, d3, n2;
    printf("Enter a three digit number: ");
    scanf("%d", &n1);
    d1 = n1%10;
    d2 = (n1/10)%10;
    d3 = n1/100;
    n2 = (d1*100)+(d2*10)+(d3);
    printf("The reversed number is %d\n", n2);
}