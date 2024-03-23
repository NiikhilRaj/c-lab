#include<stdio.h>
void change(int *a, int x)
{
    *a=x;
}
void main()
{
    int a=10;
    change(&a, 15);
    printf("%d\n", a);
}