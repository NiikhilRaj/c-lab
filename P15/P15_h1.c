#include<stdio.h>
int digsum(int a){
    int sum=100, dig, n1;

    while (sum>10)
    { 
        sum=0;
        while (a>0)
        {
            dig =a%10;
            sum+=dig;
            a/=10;
        }
        a=sum;
    }
    
    
    return sum;
    
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d \n" ,digsum(n));
}