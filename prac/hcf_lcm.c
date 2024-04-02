#include<stdio.h>
void main()
{
    int hcf=0,lcm=0,n1,n2, small;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    if (n1>n2)
    {
        small=n2;
    }
    else{
        small=n1;
    }
    for (int i = 1; i <= small; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf=i;
        } 
    }
    for (int i = small;; i++)
    {
        if (i%n1==0 && i%n2==0)
        {
            lcm=i;
            break;
        }
        
    }
    
    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
}