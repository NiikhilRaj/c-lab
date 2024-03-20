#include<stdio.h>
int power(int a, int b)
{
    int prod=1;
    for (int i = 1; i <=b; i++)
    {
        prod*=a;
    }
    return prod;
}
void main()
{
    int n, p;
    printf("Enter the number and power: ");
    scanf("%d %d", &n, &p);
    printf("%d\n", power(n,p));
}