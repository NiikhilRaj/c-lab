#include<stdio.h>
void main()
{
    int n, sum=0, sum1;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENter the sum: ");
    scanf("%d", &sum1);

    for (int j = 0; j < n; j++)
    {
        sum= arr[j];
        for (int k = (j+1); k < n; k++)
        {
            sum+= arr[k];
            if (sum==sum1)
            {
                printf("Sum found between the indices of %d and %d\n", j, k);
                break;
            }

        }
        sum=0;
    }
    
}