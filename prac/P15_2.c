#include<stdio.h>
void fact(int a)
{
    int fac=1;
    for (int i = 1; i <= a; i++)
    {
        fac*=i;
    }
    printf("THe factorial of %d is %d\n", a, fac);
}
void main()
{
    int n;
    printf("ENter a number: ");
    scanf("%d", &n);
    fact(n);
}