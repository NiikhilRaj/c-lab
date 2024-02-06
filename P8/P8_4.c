#include<stdio.h>
void main()
{
    int a, sum;
    for (int i = 1; i <=10; i++)
    {   
        printf("Enter a number:");
        scanf("%d", &a);
        sum= sum + a;
    }
    float avg = sum/10;
    printf("Sum and average is: %d %f\n",sum, avg);
}