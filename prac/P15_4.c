#include<stdio.h>
void prime(int a)
{
    for (int i = 2; i < a; i++)
    {
       if ((a%i)==0)
       {
        printf("THe number is not prime\n");
        break;
       }
       
    }
    printf("THe number is prime\n");

}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
}