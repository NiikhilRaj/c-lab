#include<stdio.h>
void main()
{
    int n,temp;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i=n-1;
    for (int j = 0; j <= (n/2)&& i>=(n/2); i--&& j++)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    printf("The reverse of array is: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
}