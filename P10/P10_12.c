#include<stdio.h>
#include<math.h>
void main()
{
    int a, sum=0;
    printf("Enter the number of numbers: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        sum+=pow(2,i);
        printf("%d ", sum);
    }
    printf("\n");
}