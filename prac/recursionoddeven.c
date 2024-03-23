#include<stdio.h>
void odd(int a)
{
if (a>0)
{
    odd(a-1);
    if (a%2!=0)
    {
        printf("%d ", a);
    }
    return;
}
}

void even(int a)
{
if (a>0)
{
    even(a-1);
    if (a%2==0)
    {
        printf("%d ", a);
    }
    return;
}
}
void main()
{
    odd(10);
    printf("\n");
    even(10);
    printf("\n");
}