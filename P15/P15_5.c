#include<stdio.h>
void swap(int a,int b)
{
    printf(" Before swapping: %d %d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" After swapping: %d %d\n", a,b);
}
void main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    swap(n1, n2);
}