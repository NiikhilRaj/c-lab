#include<stdio.h>
void arrsum(int arr[], int size)
{
    int sum=0;
    for (int j = 0; j < size; j++)
    {
        sum+= arr[j];
    }
    printf("Sum of the digits of array are: %d \n", sum);
}
void main()
{
    int a;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    arrsum(arr, a);
}