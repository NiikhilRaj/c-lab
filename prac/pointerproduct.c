#include<stdio.h>
int product(int*a, int *b)
{
    return (*a)*(*b);
}
void main()
{
    int a=5, b=6;
    printf("%d\n",product(&a,&b));
}