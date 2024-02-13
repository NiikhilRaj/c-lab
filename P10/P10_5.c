#include<stdio.h>
void main()
{
    int n, fac=1, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for ( i = n; i >=1; i--)
    {
        fac*=i;
    }
    printf("The factiorial is: %d\n", fac);
}