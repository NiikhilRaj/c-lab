#include<stdio.h>
void main()
{
    int ins,pos, a, n;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int arr[a+1];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &ins);
    printf("Enter the location: ");
    scanf("%d", &pos);
    for (int j = a; j >= pos-1; j--)
    {
        n=arr[j];
        arr[j+1]=n;
    }
    arr[pos-1]=ins;

    printf("The resultant array: ");
    for (int k = 0; k <(a+1) ; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
}

