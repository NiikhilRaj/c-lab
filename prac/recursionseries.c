#include<stdio.h>
void prin(int a)
{
    if (a>0)
    {
        prin(a-1);
        printf("%d ", a);
    }
    return;
}
void main()
{
    prin(10);
}