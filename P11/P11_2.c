#include<stdio.h>
void main()
{
    int a, sum=0;
    printf("ENter the array size: ");
    scanf("%d", &a);
    int n[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &n[i]);
        sum+= n[i];
    }
    printf("Sum of numbers stored in the array are: %d\n", sum);
}