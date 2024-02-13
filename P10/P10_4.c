#include<stdio.h>
void main()
{
    int n1, n2, gcd, lcm, small;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1>n2)
    {
        small=n2;
    }
    else{
        small=n1;
    }

    for (int i=2; i<=small ; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            gcd=i;
        }  
    }
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    for ( int j= 1; ; j++)
    {
        if (j%n1==0 && j%n2==0)
        {
            lcm=j;
            break;
        }
        
    }
    printf("LCM of %d and %d is %d\n", n1, n2, lcm);
}