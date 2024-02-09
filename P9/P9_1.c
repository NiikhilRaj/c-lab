#include<stdio.h>
void main()
{
    int n, fib=0, n1=0,n2=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++)
    {
        fib=fib+n1;
        printf("%d ", fib);
        n1=n2;
        n2=fib;
    }
    
}