#include<stdio.h>
void main()
{
    int n;
    printf("Enter till number to print: ");
    scanf("%d", &n);
    for ( int i=n; i>0 ; i=i-1)
    {
        printf("%d ", i);
    }
}   