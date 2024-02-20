#include<stdio.h>
void main()
{
    int a;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int n[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter array number%d: ", i+1);
        scanf("%d", &n[i]);
    }
    printf("Array contents are: ");
    for (int j = 0; j < a; j++)
    {
        printf("%d ", n[j]);
    }
    printf("\n");
}