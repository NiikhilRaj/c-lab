#include<stdio.h>
void main()
{
    int a, small, largest, largest2;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter %d numbers: \n", a);
    for (int l = 0; l < a; l++)
    {
        scanf("%d", &arr[l]);
    }
    largest=largest2=arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i]>largest)
        {
            largest2=largest;
            largest=arr[i];

        }
        else if (arr[i]>largest2 && arr[i]!=largest)
        {
            largest2=arr[i];
        }
    }
    
    printf("%d is the second largest number\n", largest2);
    
}