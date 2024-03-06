#include<stdio.h>
void main()
{
    int a, small, temp;
    printf("Enter the array size: ");
    scanf("%d", &a);
    int n[a];
    printf("Enter %d numbers: \n", a);
    for (int l = 0; l < a; l++)
    {
        scanf("%d", &n[l]);
    }
    for (int i = 0; i < (a-1); i++)
    {
        small=i;
        for (int j = (i+1); j < a; j++)
        {
            if (n[small]>n[j])
            {
                small=j;
            }
        }
        if (small != i)
        {
            temp = n[i];
            n[i]=n[small];
            n[small]=temp;
        }
    }
    
    printf("The numbers in ascending order are:");
    for (int k = 0; k < a; k++)
    {
        printf("%d ", n[k]);
    }
    printf("\n");
}