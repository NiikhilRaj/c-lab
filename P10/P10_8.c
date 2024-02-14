#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    float sum;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
        sum+=sqrt(i);
    }
    printf("The sum is %f\n", sum);
    return 0;

}