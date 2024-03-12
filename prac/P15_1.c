#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1,  &n2);
    printf("sum is: %d\n", sum(n1,n2));
}