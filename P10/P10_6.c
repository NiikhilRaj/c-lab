#include<stdio.h>
void main()
{
    int n, fac=1, dig, sum=0, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;
    while (n>0)
    {
        dig= n%10;
        for (int i = dig; i >=1; i--)
        {
            fac*= i;
        }
        sum+= fac;
        n/=10;
        fac=1;

    }
    if (sum==a)
    {
       printf("%d is a strong number\n", a);
    }
    else
    {
        printf("%d is not a strong number\n", a);
    }
    
}