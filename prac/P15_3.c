#include<stdio.h>
void fib(int a)
{
    int n1=0, n2=1, fib=0;
    for (int i = 0; i < a; i++)
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
    }
    printf("Fibonacci number: %d\n", fib);
}
void main()
{
    int n;
    printf("ENter the Fibonacci series number: ");
    scanf("%d", &n);
    fib(n);
}