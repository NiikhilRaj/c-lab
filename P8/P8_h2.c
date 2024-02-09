#include<stdio.h>
void main()
{
    int n1,a, d, sum=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    n1=a;
    while(a>0)
    {
        d=a%10;
        sum=sum+(d*d*d);
        a=a/10;
    }
    if (sum==n1)
    {
        printf("The givem number is a armstrong number\n");
    }
    else
    {
        printf("The given number is not armstrong\n");
    }
    
}