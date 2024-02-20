#include<stdio.h>
void main()
{
    int n, great=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        printf("Enter array number%d: ", k+1);
        scanf("%d", &arr[k]);
    }
    
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>great)
        {
            great=arr[i];
        }
        
        
    }
    printf("The greatest number is %d\n", great);
}