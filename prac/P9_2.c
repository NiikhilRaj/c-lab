#include<stdio.h>
void main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if ((n%i)==0)
        {
            sum= sum+i;
        }
        
    }
    if (sum==n)
    {
        printf("the given number is perfect\n");
    }
    else
    {
        printf("The given number is not perfect\n");
    }
    
}