#include<stdio.h>
void main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    if (n1>n2)
    {
        printf("The largest number is %d\n", n1);
    }
    
else if (n2>n1)
{
    printf("The largest number is %d\n", n2);

}

}