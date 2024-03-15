#include<stdio.h>
void sort(int arr[],int a)
{
    int temp, p;

    for (int i = 0; i < a; i++)
    {
        temp=arr[i];
        p=i;

        for (int j = i+1; j < a; j++)
        {
            if (temp>arr[j])
            {
                p=j;
                
            }  
        }
        if(p!=i)
        {
            temp=arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
        }
    }
    printf("Sorted elements are: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
}