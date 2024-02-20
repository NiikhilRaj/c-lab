#include<stdio.h>
void main()
{
    int a, sum=0;
    float avg;
    printf("ENter the array size: ");
    scanf("%d", &a);
    int n[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &n[i]);
        sum+= n[i];
    }
    avg=sum/a;
    printf("Average of numbers stored in the array are: %.2f\n", avg);
}