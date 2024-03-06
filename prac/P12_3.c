#include<stdio.h>
void main()
{
    int a;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int n[a];
    printf("Enter %d numbers: \n", a);
    for (int l = 0; l < a; l++)
    {
        scanf("%d", &n[l]);
    }
    printf("The even numbers are: ");
    for (int i = 0; i < a; i++)
    {
        if ((n[i]%2)==0)
        {
            printf("%d ", n[i]);
        }  
    }
    printf("\nThe odd numbers are: ");
    for (int i = 0; i < a; i++)
    {
        if ((n[i]%2)!=0)
        {
            printf("%d ", n[i]);
        }  
    }
    printf("\n");
}